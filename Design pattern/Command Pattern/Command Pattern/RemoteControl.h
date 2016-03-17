#pragma once
#include "Command.h"
class RemoteControl
{
public:
	RemoteControl();
	~RemoteControl();

	Command* onCommands[7];
	Command* offCommands[7];

	Command* noCommand;
	Command* undoCommand;

	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	void undoButtonWasPushed();

	void print();
};

