#pragma once
#include "Command.h"

class SimpleRemoteControl
{

public:
	SimpleRemoteControl();
	~SimpleRemoteControl();

private:
	Command* slot;
public:
	void setCommand(Command* command);
	void buttonWasPressed();
};

