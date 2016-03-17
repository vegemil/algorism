#include "stdafx.h"
#include "RemoteControl.h"
#include "NoCommand.h"


RemoteControl::RemoteControl()
{
	noCommand = new NoCommand;
	undoCommand = new NoCommand;

	for (int i = 0; i < 7; i++)
	{
		onCommands[i] = noCommand;
		offCommands[i] = noCommand;
	}	
}


RemoteControl::~RemoteControl()
{
}


void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}


void RemoteControl::onButtonWasPushed(int slot)
{
	onCommands[slot]->execute();
	undoCommand = onCommands[slot];
}


void RemoteControl::offButtonWasPushed(int slot)
{
	offCommands[slot]->execute();
	undoCommand = offCommands[slot];
}


void RemoteControl::print()
{
	cout<< "-------- Remote Control --------\n";
	for (int i = 0; i < 7; ++i)
	{
		cout<< "[slot" << i << "] " << typeid(*this->onCommands[i]).name() << ", " << typeid(*this->offCommands[i]).name() << endl;
	}

	cout << "[undo]" << typeid(*this->undoCommand).name() << endl;
}

void RemoteControl::undoButtonWasPushed()
{
	undoCommand->undo(); 
}