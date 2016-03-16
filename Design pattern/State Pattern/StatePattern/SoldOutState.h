#pragma once
#include "State.h"
#include <iostream>

class GumballMachine;

class SoldOutState :
	public State
{
private:
	GumballMachine* m_gumballMachine;

public:
	SoldOutState(GumballMachine* gumbleMachine);

	virtual void insertQuarter() ;

	virtual void ejectQuarter() ;

	virtual void turnCrank() ;

	virtual void dispense() ;
};

