// DAY2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*��� �����ҿ��� �ֹ����� ���� ������ �ݾ��� �����Ϸ��� �Ѵ�. 
������ 1���� 2%�� �ö󰬴ٰ� 1���� 2%�� �������ٰ� �Ҷ� 
n�� �Ŀ� �ֹ����� ���� ������ ����ϴ� ���α׷��� ����ÿ�.
(��, �ʱ�ݾװ� �ʱ⼼���� ����ڷκ��� �Է¹޴´�.)*/

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

	cout << "�ʱ� �ֹ����� ������ �Է��ϼ���(������) : ";
	cin >> money;

	cout << "�ʱ� ������ �Է��ϼ���(2%��� 0.02�� �Է�) : ";
	cin >> tex;

	cout << "�� �� ���� ������ �ñ��մϱ� : ";
	cin >> month;

	monthTex = CalculateMonthTex(tex, (float)month);

	cout << "n�� ���� ������ " << monthTex * 100 << "% �Դϴ�." << endl;
	cout << "n�� ���� �ֹ����� ���� ������ " << monthTex * money <<"�Դϴ�."<< endl;

	return 0;
}

