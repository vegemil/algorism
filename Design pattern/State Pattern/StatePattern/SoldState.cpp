#include "SoldState.h"
#include "GumballMachine.h"

void SoldState::insertQuarter()
{
	cout << "잠깐만 기다려주세요. 알맹이가 나가고 있습니다." << endl;
}

void SoldState::ejectQuarter()
{
	cout << "이미 알맹이를 뽑으셨습니다." << endl;
}

void SoldState::turnCrank()
{
	cout << "손잡이는 한 번만 돌려주세요" << endl;
}

void SoldState::dispense()
{
	cout << "알맹이가 나가고 있습니다." << endl;
	m_gumballMachine->releaseBall();
	if (m_gumballMachine->getCount() > 0)
	{
		m_gumballMachine->setState(m_gumballMachine->getNoQuarterState());
	}
	else
	{
		cout << "Oops, out of gumballs" << endl;
		m_gumballMachine->setState(m_gumballMachine->getSoldOutState());
	}
}

SoldState::SoldState(GumballMachine* gumballMachine)
{
	m_gumballMachine = gumballMachine;
}