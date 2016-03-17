#pragma once
#include "Command.h"
#include "Stereo.h"

class StereoOffCommand :
	public Command
{
public:
	StereoOffCommand(Stereo* stereo);
	virtual ~StereoOffCommand();

	virtual void execute() override;

	virtual void undo() override;

private:
	Stereo* stereo;
};

