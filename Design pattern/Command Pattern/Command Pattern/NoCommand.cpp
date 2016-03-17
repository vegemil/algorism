#include "stdafx.h"
#include "NoCommand.h"


NoCommand::NoCommand()
{
}


NoCommand::~NoCommand()
{
}

void NoCommand::execute()
{
	throw std::logic_error("The method or operation is not implemented.");
}

void NoCommand::undo()
{
	throw std::logic_error("The method or operation is not implemented.");
}
