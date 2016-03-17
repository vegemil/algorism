#pragma once
#include "Command.h"
#include "CeilingFan.h"

class CeilingFanHighCommand :
	public Command
{
public:
	CeilingFanHighCommand(CeilingFan* ceilingFan);
	virtual ~CeilingFanHighCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	CeilingFan* ceilingFan;

};

