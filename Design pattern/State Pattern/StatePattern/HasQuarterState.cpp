#include "HasQuarterState.h"
#include "GumballMachine.h"

void HasQuarterState::insertQuarter()
{
	cout << "������ �� ���� �־��ּ���" << endl;
}

void HasQuarterState::ejectQuarter()
{
	cout << "������ ��ȯ�˴ϴ�." << endl;
	m_gumballMachine->setState(m_gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	cout << "�����̸� �����̽��ϴ�." << endl;
	m_gumballMachine->setState(m_gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
	cout << "�˸��̰� ���� �� �����ϴ�." << endl;
}

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	this->m_gumballMachine = gumballMachine;
}