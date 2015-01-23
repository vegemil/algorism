// DAY3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int count;

	cin >> count;

	string* word = new string[count];
	string shortword;

	int  temp = 0;
	int startindex = 0;
	int endindex = 0;
	int k = 0;


	for (int i = 0; i < count; ++i)
	{
		cin >> word[i];
	}

	for (int i = 0; i < count; ++i)
	{
		cout << "#testcase" << i + 1 << endl;

		cout << word[i] << " " << word[i].length() << endl;

		string::iterator  iter = word[i].begin();

		while (k <= word[i].length())
		{
			if (word[i].length() == 1)
			{
				k = word[i].length() + 1;
				shortword += word[i];
				shortword += word[i].length();
			}

			else if ((iter + 1) == word[i].end())
			{
				if (*iter == *(iter - 1))
					shortword += to_string(temp + 1);
				else
				{
					shortword += *iter;
					shortword += "1";
				}
				k = word[i].length() + 1;
			}

			else if (temp == 0)
			{
				shortword += *iter;

				if (*iter == *(iter + 1))
				{
					++temp;
				}
				else
				{
					shortword += "1";
					temp = 0;
				}
				++iter;
			}

			

			else
			{
				if (*iter == *(iter + 1))
				{
					++temp;
				}
				else
				{
					shortword += to_string(temp + 1);
					temp = 0;
				}
				iter++;
			}

			

			++k;
		}


		if (shortword.length() >= word[i].length())
			cout << word[i] << " " << word[i].length() << endl;
		else
			cout << shortword << " " << shortword.length() << endl;

	}


	delete[] word;

	return 0;
}

