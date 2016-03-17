#pragma once
class Stereo
{
public:
	Stereo(string name);
	virtual ~Stereo();
	void On();
	void Off();

private:
	string name;
};

