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
	cout << name << " 오디오를 켭니다" << endl;
}


void Stereo::Off()
{
	cout << name << " 오디오를 끕니다" << endl;
}
