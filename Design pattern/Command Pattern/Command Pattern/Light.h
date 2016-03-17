#pragma once

class Light
{
public:
	Light(string name);
	~Light();


	void on();
	void off();

private:
	string name; 
};

