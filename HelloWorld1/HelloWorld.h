#pragma once
#include <string>
#include <iostream>

using namespace std;

class HelloWorld
{
private:
	string text;
public:
	HelloWorld(const char* txt);
	void speak();
	~HelloWorld();
};
