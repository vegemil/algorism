// DAY3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int count;

	cin >> count;

	string* word = new string[count];
	string shortword;

	int  temp = 0;

	int k = 0;


	for (int i = 0; i < count; ++i)
	{
		cin >> word[i];
	}

	int i = 0;

	while (i <count)
	{
		cout <<endl << "#testcase" << i + 1 << endl;

		cout << word[i] << " " << word[i].length() << endl;

		string::iterator  iter = word[i].begin();

		shortword = "";
		k = 0;
		temp = 0;

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

		++i;

	}


	delete[] word;

	return 0;
}

