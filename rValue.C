#include <iostream>

using namespace std;

void printReference (int& value)
{
        cout << "lvalue: value = " << value << endl;
}
 
void printReference (int&& value)
{
        cout << "rvalue: value = " << value << endl;
}

int getValue ()
{
    int temp_ii = 99;
    return temp_ii;
}

int main()
{ 
	int ii = 11;
	printReference(ii);
	printReference(getValue());  //  printReference(99);
	return 0;
}

