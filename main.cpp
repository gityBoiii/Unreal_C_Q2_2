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
//	return Name2; //�������� ��ȯ �ȵ�
//}

char* CopyName(char* Name, char* Name2)
{
	for (int i = 0; i < 6; i++)
	{
		Name2[i] = Name[i];
		cout << Name2[i] << endl;
	}

	return Name2; //�����ͷ� �ȸ����, �������� ��ȯ �ȵ�
}

char* ToSmall(char* Name)
{
	cout << "�ҹ��ڷ�" << endl;
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
	cout << "�빮�ڷ�" << endl;
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
		/* ���� */
	// name -> name2�� �ű��

	char Name[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char Name2[6] = { 0, };
	cout << "Name ���� �ʱⰪ  : " << Name << endl;

	//char* temp = new char[6]; //�ӽ÷� �ű��
		//���� 1
	/* ùƮ */
	/*for (int i = 0; i < sizeof(temp); i++)
	{
		Name2[i] = temp[i];
		cout << "Name2[i]�� : " << Name2[i] << endl;
	}*/
	/* 2Ʈ*/
	//char* ChangedName = ChangeName(Name);
	char* CopyedName = CopyName(Name, Name2);
	cout << "�ٲ� �̸� : " << CopyedName << endl; // ����� ��ȯ �ȵ�

		//���� 2
	// ���ڿ� -> �ҹ���
	// ���ڿ� -> �빮��
	// ���ڿ� -> �Ųٷ�
	// ���ڿ� ��ġ��

	cout << ToSmall(Name) << endl;
	cout << ToBig(Name) << endl;
	//cout << ToReversed(Name) << endl;

	cout << "�Ųٷ�" << endl;
	char temp[6] = { 0, };
	for (int i = 0; i < 6; i++)
	{
		temp[i] = Name[6 - (i+1)];
		cout << temp[i] << endl;
	}
	cout << "temp : " << temp << endl;
	
	cout << "��ġ�� " << endl;
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

