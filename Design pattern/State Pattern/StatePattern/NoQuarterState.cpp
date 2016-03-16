#include "NoQuarterState.h"
#include "GumballMachine.h"

void NoQuarterState::insertQuarter()
{
	cout << "동전을 넣으셨습니다." << endl;
	m_gumballMachine->setState(m_gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	cout << "동전을 넣어주세요" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "동전을 넣어주세요" << endl;
}

void NoQuarterState::dispense()
{
	cout << "동전을 넣으셨습니다." << endl;
}

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
{
	m_gumballMachine = gumballMachine;
}