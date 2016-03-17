#include "stdafx.h"
#include "GarageDoorCloseCommand.h"


GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
}


GarageDoorCloseCommand::~GarageDoorCloseCommand()
{
}

void GarageDoorCloseCommand::execute()
{
	garageDoor->down();
}

void GarageDoorCloseCommand::undo()
{
	garageDoor->up();
}
