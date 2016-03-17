#include "stdafx.h"
#include "GarageDoorOpenCommand.h"


GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
}


GarageDoorOpenCommand::~GarageDoorOpenCommand()
{
	delete garageDoor;
}

void GarageDoorOpenCommand::execute()
{
	garageDoor->up();
}

void GarageDoorOpenCommand::undo()
{
	garageDoor->down();
}
