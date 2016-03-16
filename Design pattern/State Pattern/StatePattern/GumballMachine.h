#pragma once
#include "State.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"

class GumballMachine
{
public:
	virtual ~GumballMachine();

	GumballMachine(int numberGumballs);

	void init();

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void setState(State* state);
	void releaseBall();
	int getCount();

	State* getNoQuarterState();
	State* getSoldState();
	State* getHasQuarterState();
	State* getSoldOutState();

	std::string toString();

private:
	State* m_soldOutState;
	State* m_noQuarterState;
	State* m_hasQuarterState;
	State* m_soldState;

	State* m_state;
	int m_count = 0;
};

