// DAY4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.

//���ڿ��� ���Ե� ���ڵ��� ���� ���������� �˻��ϴ� �˰����� �����϶�.
//�ٸ� �ڷᱸ���� ����Ҽ� ���� ��Ȳ�̶�� ��� �ϰڴ°�.

#include "stdafx.h"
#include <string>

bool CheckString(string* str)
{
	if (str->length() > 256)
		return false;

	bool check[256];

	for (int i = 0; i < str->length(); ++i)
	{
		//���ڸ� �ƽ�Ű�ڵ� �ε����� ����
		int index = str->at(i);

		if (check[index] == true)
		{
			return false;
		}

		else
			check[index] = true;
	}

	return true;
}


int _tmain(int argc, _TCHAR* argv[])
{
	string test1 = "abcdefghijklmnopqrstuvwxyz";
	string test2 = "abdddd";

	bool temp1 = CheckString(&test1);
	bool temp2 = CheckString(&test2);


	if (temp1)
		cout << "temp1 Ȯ��" << endl;
	if (temp2)
		cout << "temp2 Ȯ��" << endl;


	return 0;
}

