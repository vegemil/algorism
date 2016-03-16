#include "SoldState.h"
#include "GumballMachine.h"

void SoldState::insertQuarter()
{
	cout << "��� ��ٷ��ּ���. �˸��̰� ������ �ֽ��ϴ�." << endl;
}

void SoldState::ejectQuarter()
{
	cout << "�̹� �˸��̸� �����̽��ϴ�." << endl;
}

void SoldState::turnCrank()
{
	cout << "�����̴� �� ���� �����ּ���" << endl;
}

void SoldState::dispense()
{
	cout << "�˸��̰� ������ �ֽ��ϴ�." << endl;
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