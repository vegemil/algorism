#include "stdafx.h"
#include "CeilingFanHighCommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* ceilingFan)
{
	this->ceilingFan = ceilingFan;
}


void CeilingFanHighCommand::execute()
{
	ceilingFan->High();
}

void CeilingFanHighCommand::undo()
{
	ceilingFan->Off();
}

CeilingFanHighCommand::~CeilingFanHighCommand()
{

}
