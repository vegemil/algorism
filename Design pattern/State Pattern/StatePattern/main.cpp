#include "GumballMachine.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	GumballMachine* gumballMachine = new GumballMachine(10);

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	return 0;
}