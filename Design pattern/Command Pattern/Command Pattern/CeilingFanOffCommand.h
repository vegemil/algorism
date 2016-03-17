#pragma once
#include "Command.h"
#include "CeilingFan.h"

class CeilingFanOffCommand :
	public Command
{
public:
	CeilingFanOffCommand(CeilingFan* ceilingFan);
	virtual ~CeilingFanOffCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	CeilingFan* ceilingFan;
};

