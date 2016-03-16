#pragma once
#include "State.h"
#include <iostream>

class GumballMachine;

class HasQuarterState :
	public State
{
public:
	HasQuarterState(GumballMachine* gumballMachine);

	virtual void insertQuarter() ;

	virtual void ejectQuarter() ;

	virtual void turnCrank() ;

	virtual void dispense() ;

private:
	GumballMachine* m_gumballMachine;
};

