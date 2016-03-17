#include "stdafx.h"
#include "GarageDoor.h"


GarageDoor::GarageDoor(string name)
{
	this->name = name;
}


GarageDoor::~GarageDoor()
{
}


void GarageDoor::up()
{
	cout << name << " 차고 문을 엽니다" << endl;
}


void GarageDoor::down()
{
	cout << name << " 차고 문을 닫습니다" << endl;
}


void GarageDoor::stop()
{
	cout << name << " 차고 문 동작을 멈춥니다" << endl;
}


void GarageDoor::lightOn()
{
	cout << name << " 차고 불을 켭니다" << endl;
}


void GarageDoor::lightOff()
{
	cout << name << " 차고 불을 끕니다" << endl;
}
