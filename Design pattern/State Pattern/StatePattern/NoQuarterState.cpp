#include "NoQuarterState.h"
#include "GumballMachine.h"

void NoQuarterState::insertQuarter()
{
	cout << "������ �����̽��ϴ�." << endl;
	m_gumballMachine->setState(m_gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	cout << "������ �־��ּ���" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "������ �־��ּ���" << endl;
}

void NoQuarterState::dispense()
{
	cout << "������ �����̽��ϴ�." << endl;
}

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
{
	m_gumballMachine = gumballMachine;
}