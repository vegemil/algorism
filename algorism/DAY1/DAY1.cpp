// DAY1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string>


bool IsEvenWord(const string word)
{
	if (word.length() % 2 != 0)
		return true;
	else
	{
		cout << "�¿� ��Ī�� �ƴ� �ܾ�" << endl;
		return false;
	}
}

bool IsSymmetric(const string word)
{
	if (IsEvenWord(word))
	{
		for (int i = 0; i < word.length(); i++)
		{
			if (word.at(i) == word.at(word.length() - 1 - i))
			{
				cout << "�¿� ��Ī�� �ܾ�"<<endl;
				return true;
			}
			else
			{
				cout << "�¿� ��Ī�� �ƴ� �ܾ�" << endl;
				return false;
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	string word;
	getline(cin, word);

	IsSymmetric(word);

	return 0;
}




