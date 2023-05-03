#include "myfunctions.h"
#include <string>

int userInput() {
	/*
	* This is kinda new. 
	* Pay attention.
	*/

	//int, float, char
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore(); // we need add this line to clear out the newline character (i.e. after the user pressed the Enter key).
	cout << "Your age is " << age << ", sweet!" << endl;
	
	/*
	* strings:
	* To get a string input you need to:
	* 1. include the <string> header
	* 2. use the getline() method
	*/
	string name;
	cout << "What's your name? ";
	getline(cin, name);
	cout << "Hi there, " << name << endl;
	
	return 0;
}