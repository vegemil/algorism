#pragma once
#include "State.h"
#include <iostream>

class GumballMachine;

class SoldState :
	public State
{
public:

	virtual void insertQuarter() override;

	virtual void ejectQuarter() override;

	virtual void turnCrank() override;

	virtual void dispense() override;

	SoldState(GumballMachine* gumballMachine);
private:
	GumballMachine* m_gumballMachine;
};

