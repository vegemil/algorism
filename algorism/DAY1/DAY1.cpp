// DAY1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>


bool IsEvenWord(const string word)
{
	if (word.length() % 2 != 0)
		return true;
	else
	{
		cout << "좌우 대칭이 아닌 단어" << endl;
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
				cout << "좌우 대칭인 단어"<<endl;
				return true;
			}
			else
			{
				cout << "좌우 대칭이 아닌 단어" << endl;
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




