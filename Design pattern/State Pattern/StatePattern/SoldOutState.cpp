#include "SoldOutState.h"
#include "GumballMachine.h"
void SoldOutState::insertQuarter()
{
	cout << "�����Ǿ����ϴ�. ���� ��ȸ�� �̿����ּ���" << endl;
}

void SoldOutState::ejectQuarter()
{
	cout << "������ ���� �����̽��ϴ�. ������ ��ȯ���� �ʽ��ϴ�." << endl;
}

void SoldOutState::turnCrank()
{
	cout << "�����Ǿ����ϴ�. " << endl;
}

void SoldOutState::dispense()
{
	cout << "�����Դϴ�." << endl;
}

SoldOutState::SoldOutState(GumballMachine* gumbleMachine)
{
	m_gumballMachine = gumbleMachine;
}
