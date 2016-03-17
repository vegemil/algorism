#include "stdafx.h"
#include "StereoOnCommand.h"


StereoOnCommand::StereoOnCommand(Stereo* stereo)
{
	this->stereo = stereo;
}


StereoOnCommand::~StereoOnCommand()
{
}

void StereoOnCommand::execute()
{
	stereo->On();
}

void StereoOnCommand::undo()
{
	stereo->Off();
}
