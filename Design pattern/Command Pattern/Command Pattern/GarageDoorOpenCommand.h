#pragma once
#include "Command.h"
#include "GarageDoor.h"

class GarageDoorOpenCommand :
	public Command
{
public:
	GarageDoorOpenCommand(GarageDoor* garageDoor);
	virtual ~GarageDoorOpenCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	GarageDoor* garageDoor;
};

