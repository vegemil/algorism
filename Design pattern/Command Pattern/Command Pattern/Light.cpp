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
	cout << name << " ºÒÀ» ÄÕ´Ï´Ù" << endl;
}


void Light::off()
{
	cout << name << " ºÒÀ» ²ü´Ï´Ù." << endl;
}
