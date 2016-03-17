#pragma once
#include "Command.h"
#include "GarageDoor.h"

class GarageDoorCloseCommand :
	public Command
{
public:
	GarageDoorCloseCommand(GarageDoor* garageDoor);
	virtual ~GarageDoorCloseCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	GarageDoor* garageDoor;
};

