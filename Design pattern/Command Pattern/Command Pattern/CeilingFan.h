#pragma once
class CeilingFan
{
public:
	CeilingFan(string name);
	~CeilingFan();
	void High();
//	void off();
	void Off();

private:
	string name;
};

