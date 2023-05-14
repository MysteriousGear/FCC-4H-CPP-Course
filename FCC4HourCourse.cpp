#include <iostream>
#include "myfunctions.h"

using namespace std;

int main()
{
	/*
	* see: https://stackoverflow.com/a/5460235
	*/
	const char* welcomeText =
		"Welcome! Please choose which program to run (enter its number):\n "
		"1 - HelloWorld\n"
		"2 - variables\n"
		"3 - stringFunctions\n"
		"4 - gettingUserIput\n"
		"5 - Calculator\n"
		"6 - BroCode\n"
		"7 - numberGuessingGame\n"
		"8 - printGlobal\n"
		"10 - printAndClear\n"
		"11 - quiz\n";
	int programToRun;

	cout << welcomeText << endl;
	cin >> programToRun;

	switch (programToRun)
	{
		case 1:
			hello();
			break;
		case 2:
			mud();
			break;
		case 3:
			stringFunc();
			break;
		case 4:
			userInput();
			break;
		case 5:
			betterCalc();
			break;
		case 6:
			//codeBro();
			break;
		case 7:
			//numberGuessingGame();
			break;
		case 8:
			//printGlobal();
			break;
		case 9:
			///void rockPaperScissors();
			break;
		case 10:
			printAndClear();
			break;
		case 11:
			quiz();
			break;
		default:
			cout << "Sorry, invalid program number.";
	}

	//cout << "\nRunning the program 'HelloWorld'\n";
	//hello();
	//cout << "\nRunning the program 'variables'\n";
	//mud();
	//cout << "\nRunning the program 'stringFunctions'\n";
	//stringFunc();
	//cout << "\nRunning the program 'gettingUserInput'\n";
	//userInput();
	/*cout << "\nRunning the program 'calculator'\n";
	betterCalc();*/


	return 0;
}