// DAY4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.

//문자열에 포함된 문자들이 전부 유일한지를 검사하는 알고리즘을 구현하라.
//다른 자료구조를 사용할수 없는 상황이라면 어떻게 하겠는가.

#include "stdafx.h"
#include <string>

bool CheckString(string* str)
{
	if (str->length() > 256)
		return false;

	bool check[256];

	for (int i = 0; i < str->length(); ++i)
	{
		//문자를 아스키코드 인덱스로 저장
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
		cout << "temp1 확인" << endl;
	if (temp2)
		cout << "temp2 확인" << endl;


	return 0;
}

