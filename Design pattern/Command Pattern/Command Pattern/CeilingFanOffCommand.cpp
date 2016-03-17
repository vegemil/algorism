#include "stdafx.h"
#include "CeilingFanOffCommand.h"


CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* ceilingFan)
{
	this->ceilingFan = ceilingFan;
}


CeilingFanOffCommand::~CeilingFanOffCommand()
{
}

void CeilingFanOffCommand::execute()
{
	ceilingFan->Off();
}

void CeilingFanOffCommand::undo()
{
	ceilingFan->High();
}
