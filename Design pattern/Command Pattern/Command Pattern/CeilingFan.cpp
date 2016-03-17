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
	cout << name << " ¼±Ç³±â¸¦ ÄÕ´Ï´Ù" << endl;
}

void CeilingFan::Off()
{
	cout << name << " ¼±Ç³±â¸¦ ²ü´Ï´Ù" << endl;
}
