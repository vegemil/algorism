#pragma once
#include "State.h"
#include <iostream>

class GumballMachine;

class NoQuarterState :
	public State
{
public:
	virtual void insertQuarter() ;

	virtual void ejectQuarter() ;

	virtual void turnCrank() ;

	virtual void dispense() ;

	NoQuarterState(GumballMachine* gumballMachine);
private:
	GumballMachine* m_gumballMachine;
};

