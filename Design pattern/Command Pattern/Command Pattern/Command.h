#pragma once
#include "stdafx.h"

class Command
{
public:
	Command();
	virtual ~Command() = 0;

	virtual void execute() = 0;
	virtual void undo() = 0;
};

