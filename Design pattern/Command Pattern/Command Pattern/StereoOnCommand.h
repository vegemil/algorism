#pragma once
#include "Command.h"
#include "Stereo.h"

class StereoOnCommand :
	public Command
{
public:
	StereoOnCommand(Stereo* stereo);
	virtual ~StereoOnCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	Stereo* stereo;
};

