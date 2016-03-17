#pragma once
class GarageDoor
{
public:
	GarageDoor(string name);
	~GarageDoor();

	void up();
	void down();
	void stop();
	void lightOn();
	void lightOff();

private:
	string name; 
};

