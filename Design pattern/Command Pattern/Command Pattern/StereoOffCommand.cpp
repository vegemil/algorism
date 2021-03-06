#include "stdafx.h"
#include "StereoOffCommand.h"


StereoOffCommand::StereoOffCommand(Stereo* stereo)
{
	this->stereo = stereo;
}


StereoOffCommand::~StereoOffCommand()
{
}

void StereoOffCommand::execute()
{
	stereo->Off();
}

void StereoOffCommand::undo()
{
	stereo->On();
}
