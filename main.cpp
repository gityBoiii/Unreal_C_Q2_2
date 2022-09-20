#include <iostream>
using namespace std;


//char* ChangeName(char* Name)
//{
//	char Name2[6] = { 0 , };
//
//	for (int i = 0; i <6; i++)
//	{
//		Name2[i] = Name[i];
//		cout << Name2[i]<<endl;
//	}
//	return Name2; //지역변수 반환 안됨
//}

char* CopyName(char* Name, char* Name2)
{
	for (int i = 0; i < 6; i++)
	{
		Name2[i] = Name[i];
		cout << Name2[i] << endl;
	}

	return Name2; //포인터로 안만들시, 지역변수 반환 안됨
}

char* ToSmall(char* Name)
{
	cout << "소문자로" << endl;
	for (int i = 0; i < 6; i++)
	{
		if (Name[i] >= 'A' && Name[i] <= 'Z')
		{
			Name[i] = Name[i] + 32;
		}
	}
	return Name;
}

char* ToBig(char* Name)
{
	cout << "대문자로" << endl;
	for (int i = 0; i < 6; i++)
	{
		if (Name[i] >= 'a' && Name[i] <= 'z')
		{
			Name[i] = Name[i] - 32;
		}
	}
	return Name;
}

//char* ToReversed(char* Name)
//{
//
//	return 0;
//}

int main()
{
		/* 문제 */
	// name -> name2로 옮기기

	char Name[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char Name2[6] = { 0, };
	cout << "Name 변수 초기값  : " << Name << endl;

	//char* temp = new char[6]; //임시로 옮기기
		//문제 1
	/* 첫트 */
	/*for (int i = 0; i < sizeof(temp); i++)
	{
		Name2[i] = temp[i];
		cout << "Name2[i]는 : " << Name2[i] << endl;
	}*/
	/* 2트*/
	//char* ChangedName = ChangeName(Name);
	char* CopyedName = CopyName(Name, Name2);
	cout << "바뀐 이름 : " << CopyedName << endl; // 제대로 반환 안됨

		//문제 2
	// 문자열 -> 소문자
	// 문자열 -> 대문자
	// 문자열 -> 거꾸로
	// 문자열 합치기

	cout << ToSmall(Name) << endl;
	cout << ToBig(Name) << endl;
	//cout << ToReversed(Name) << endl;

	cout << "거꾸로" << endl;
	char temp[6] = { 0, };
	for (int i = 0; i < 6; i++)
	{
		temp[i] = Name[6 - (i+1)];
		cout << temp[i] << endl;
	}
	cout << "temp : " << temp << endl;
	
	cout << "합치기 " << endl;
	char Name3[(sizeof(Name) + sizeof(Name2)) - 1] = { 0, };
	for (int i = 0; i < sizeof(Name3); i++)
	{
		if (i < (sizeof(Name)-1))
		{
			Name3[i] = Name[i];
			cout << " 1! ";
			cout << Name3[i] << endl;
		}
		else
		{
			Name3[i] = Name2[i - (sizeof(Name))+1];
			cout << " 2! ";
			cout << Name3[i] << endl;
		}
			
	}
	cout << "Name3 : " << Name3 << endl;

	return 0;
}

