#include "stdafx.h"
#include "Light.h"


Light::Light(string name)
{
	this->name = name;
}

Light::~Light()
{
}

void Light::on()
{
	cout << name << " ���� �մϴ�" << endl;
}


void Light::off()
{
	cout << name << " ���� ���ϴ�." << endl;
}
