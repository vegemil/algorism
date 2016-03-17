#include "stdafx.h"
#include "LightOnCommnad.h"


LightOnCommnad::LightOnCommnad(Light* light)
{
	this->light = light;
}


LightOnCommnad::~LightOnCommnad()
{
	delete light;
}

void LightOnCommnad::execute()
{
	light->on();
}

void LightOnCommnad::undo()
{
	light->off();
}
