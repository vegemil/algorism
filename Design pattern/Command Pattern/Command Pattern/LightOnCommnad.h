#pragma once
#include "Command.h"
#include "Light.h"

class LightOnCommnad :
	public Command
{
public:
	LightOnCommnad(Light* light);
	virtual ~LightOnCommnad();

	virtual void execute() override;

	virtual void undo() override;

private:
	Light* light;
};

