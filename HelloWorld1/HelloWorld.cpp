#include "HelloWorld.h"

HelloWorld::HelloWorld(const char* txt)
{
	text = string(txt);
}

void HelloWorld::speak()
{
	cout << text << endl;
}


HelloWorld::~HelloWorld()
{
}

int main() {
	HelloWorld heeyaa("Hello World!!");
	heeyaa.speak();
}