#include "myfunctions.h"

/*
* We'll make it much coller later on.
*/
int calc() {
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

	return 0;
}

int betterCalc() {
	int num1, num2;
	char op; //stands for operator

	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the desired operator ( + , - , * , / ): ";
	cin >> op;
	cout << "Enter the second number: ";
	cin >> num2;

	int result = num1;
	if (op == '+') {
		result = num1 + num2;
	}
	else if (op == '-') {
		result = num1 - num2;
	}
	else if (op == '*') {
		result = num1 * num2;
	}
	else if (op == '/') {
		if (num2 == 0) {
			cout << "Sorry, can't divide by zero." << endl;
		}
		else {
			result = num1 / num2;
		}
	}
	else {
		cout << "Sorry, invalid operator." << endl;
	}

	cout << "Result: " << result << endl;

	return 0;
}
