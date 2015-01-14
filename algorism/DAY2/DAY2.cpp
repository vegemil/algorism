// DAY2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*어떠한 주유소에서 휘발유에 관한 세금의 금액을 조사하려고 한다. 
세금이 1주후 2%가 올라갔다가 1주후 2%가 떨어진다고 할때 
n달 후에 휘발유에 관한 세금을 출력하는 프로그램을 만드시오.
(단, 초기금액과 초기세금은 사용자로부터 입력받는다.)*/

#include "stdafx.h"

float CalculateMonthTex(const float& tex, const float& month)
{
	float monthTex = tex * pow(1.02, 2.0) * pow(0.98, 2.0);

	monthTex = pow(monthTex, month);

	return monthTex;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int money;
	float tex;
	int month;
	float monthTex;

	cout << "초기 휘발유의 가격을 입력하세요(정수형) : ";
	cin >> money;

	cout << "초기 세금을 입력하세요(2%라면 0.02로 입력) : ";
	cin >> tex;

	cout << "몇 달 후의 세율이 궁금합니까 : ";
	cin >> month;

	monthTex = CalculateMonthTex(tex, (float)month);

	cout << "n달 후의 세율은 " << monthTex * 100 << "% 입니다." << endl;
	cout << "n달 후의 휘발유에 관한 세금은 " << monthTex * money <<"입니다."<< endl;

	return 0;
}

