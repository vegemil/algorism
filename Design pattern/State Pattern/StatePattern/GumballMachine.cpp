#include "GumballMachine.h"


using namespace std;

GumballMachine::~GumballMachine()
{
	delete m_soldOutState;
	delete m_noQuarterState;
	delete m_hasQuarterState;
	delete m_soldState;
}

GumballMachine::GumballMachine(int numberGumballs)
{
	m_count = numberGumballs;	
	m_soldOutState = new SoldOutState(this);
	m_noQuarterState = new NoQuarterState(this);
	m_hasQuarterState = new HasQuarterState(this);
	m_soldState = new SoldState(this);

	if (numberGumballs > 0)
	{
		m_state = m_noQuarterState;
	}
}

void GumballMachine::insertQuarter()
{
	m_state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	m_state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	m_state->turnCrank();
	m_state->dispense();
}

void GumballMachine::setState(State* state)
{
	this->m_state = state;
}

void GumballMachine::releaseBall()
{
	cout << "A gumball Comes rolling out the slot...";
	if (m_count != 0)
	{
		m_count = m_count - 1;
	}
}

int GumballMachine::getCount()
{
	return m_count;
}


State* GumballMachine::getNoQuarterState()
{
	return m_noQuarterState;
}

State* GumballMachine::getSoldState()
{
	return m_soldState;
}

State* GumballMachine::getHasQuarterState()
{
	return m_hasQuarterState;
}

State* GumballMachine::getSoldOutState()
{
	return m_soldOutState;
}

std::string GumballMachine::toString()
{
	std::stringstream out;
	out << "\nMighty Gumball, Inc.";
	out << "\nC++로 만든 2016 뽑기 기계";
	out << "\nInventory: " << m_count << " gumball";
	if (m_count != 1) {
		out << "s";
	}
	out << "\n";
	out << "Machine is " << m_state << "\n";
	return out.str();
}