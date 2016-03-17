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
	cout << name << " ���� ���� ���ϴ�" << endl;
}


void GarageDoor::down()
{
	cout << name << " ���� ���� �ݽ��ϴ�" << endl;
}


void GarageDoor::stop()
{
	cout << name << " ���� �� ������ ����ϴ�" << endl;
}


void GarageDoor::lightOn()
{
	cout << name << " ���� ���� �մϴ�" << endl;
}


void GarageDoor::lightOff()
{
	cout << name << " ���� ���� ���ϴ�" << endl;
}
