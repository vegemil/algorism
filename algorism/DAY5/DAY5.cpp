// DAY5.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

//null문자로 끝나는 문자열을 뒤집는 reverse(char* str)함수를 구현하라

#include "stdafx.h"



int CheckLength(char* str)
{
	int i = 0;

	while (true)
	{
		if (str[i] == '\0')
			return i + 1;

		i++;
	}
}

char* reverse(char* str)
{
	int length = CheckLength(str);

	char* temp = new char[length];
	
	for (int i = 0; i < length; i++)
	{
		temp[i] = str[length - i - 2];
	}

	temp[6] = '\0';

	return temp;
}




int _tmain(int argc, _TCHAR* argv[])
{
	char* str = "abcdef\0";

	str = reverse(str);
	
	cout << str << endl;
	return 0;
}

