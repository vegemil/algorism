#include "stdafx.h"
#include "Stereo.h"


Stereo::Stereo(string name)
{
	this->name = name;
}


Stereo::~Stereo()
{
}


void Stereo::On()
{
	cout << name << " ������� �մϴ�" << endl;
}


void Stereo::Off()
{
	cout << name << " ������� ���ϴ�" << endl;
}
