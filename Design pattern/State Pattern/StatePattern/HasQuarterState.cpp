#include "HasQuarterState.h"
#include "GumballMachine.h"

void HasQuarterState::insertQuarter()
{
	cout << "동전을 한 개만 넣어주세요" << endl;
}

void HasQuarterState::ejectQuarter()
{
	cout << "동전이 반환됩니다." << endl;
	m_gumballMachine->setState(m_gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	cout << "손잡이를 돌리셨습니다." << endl;
	m_gumballMachine->setState(m_gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
	cout << "알맹이가 나갈 수 없습니다." << endl;
}

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	this->m_gumballMachine = gumballMachine;
}