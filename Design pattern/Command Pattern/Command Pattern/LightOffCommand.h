#pragma once
#include "stdafx.h"
#include "Command.h"
#include "Light.h"

class LightOffCommand : public Command
{
public:
	LightOffCommand(Light* light);
	virtual ~LightOffCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	Light* light;
};

