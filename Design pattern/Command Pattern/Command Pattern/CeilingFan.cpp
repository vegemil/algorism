#include "stdafx.h"
#include "CeilingFan.h"


CeilingFan::CeilingFan(string name)
{
	this->name = name;
}


CeilingFan::~CeilingFan()
{
}


void CeilingFan::High()
{
	cout << name << " ��ǳ�⸦ �մϴ�" << endl;
}

void CeilingFan::Off()
{
	cout << name << " ��ǳ�⸦ ���ϴ�" << endl;
}
