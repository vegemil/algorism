#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

class State
{
public:
	State(){};
	virtual ~State(){};

	virtual void insertQuarter(){};
	virtual void ejectQuarter(){};
	virtual void turnCrank(){};
	virtual void dispense(){};
};

