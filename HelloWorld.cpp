#include "myfunctions.h"

int hello()
{
	cout << "Hello World!" << endl;

	int age = 25;
	int* pAge = &age;

	cout << &pAge << endl;

	cout << *pAge << endl;

	return 0;
}

/*
Alternative 1:

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	return 0;
}

Alternative 2:

#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}
*/