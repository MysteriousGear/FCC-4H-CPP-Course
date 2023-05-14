//#include <iostream>
//#include <string>
//#include "myfunctions.h"
//
//int globalNum = 5;
//int num = 7;
//
//int codeBro() {
//
//	// for avoiding trouble with 'name' when we're going to use getline()
//	cin.ignore();
//
//	std::string name;
//	std::cout << "Enter your name: ";
//	std::getline(std::cin, name);
//
//	std::string email = name;
//	email.append("@domain.com"); // will this change both strings? Answer: no, only email.
//	
//	std::cout << "Email: " << email << '\n';
//	std::cout << "Name: " << name << '\n';
//
//	name.insert(0, "De la ");
//	std::cout << name << '\n';
//	
//	std::cout << name.find("Pako") << '\n';
//	
//	name = "John";
//	name.erase(0, 0); 
//	std::cout << name << '\n'; // nothing is erased
//	
//	name = "John";
//	name.erase(1, 1);
//	std::cout << name << '\n'; // "Jo"
//	
//	name = "John";
//	name.erase(3, 5); 
//	std::cout << name << '\n'; // Joh
//	
//	return 0;
//}
//
//int numberGuessingGame() {
//	#include <ctime>
//
//	int num;
//	int guess;
//	int tries = 0;
//	bool guessed = false;
//	
//	srand(time(NULL));
//	num = (rand() % 11) + 1; // 1 to 10
//
//	while (!guessed)
//	{
//		std::cout << "Enter a number between 1 and 10: " << '\n';
//		std::cin >> guess;
//		tries++;
//
//		if (guess < 0 || guess > 10)
//		{
//			std::cout << "ignored invalid number (but your guess was counted)." << '\n';
//			continue;
//		}
//		
//		if (guess == num)
//		{
//			guessed = true;
//		}
//	}
//	std::cout << "Correct! you guessed the number " << num << " after " << tries << " tries." << '\n';
//
//	return 0;
//}
//
//// local and global variables
//void printGlobal()
//{
//	int num = 6;
//
//	std::cout << "Printing the global variable `globalNum`: " << globalNum << '\n';
//	std::cout << "Printing the local variable `num`: " << num << '\n';
//	std::cout << "Printing the global variable `num`: " << ::num << '\n';
//
//
//}
//
//void rockPaperScissors()
//{
//	int userChoice;
//	int compChoice;
//	bool ended = false;
//	srand(time(0));
//
//	do
//	{
//		std::cout << "Choose: Rock (1), Paper (2), or Scissors (3): " << '\n';
//		std::cin >> userChoice;
//
//		if (userChoice < 1 || userChoice > 3)
//		{
//			std::cout << "Invalid choice. \n";
//			ended = true;
//			break;
//		}
//		compChoice = (rand() % 3) + 1;
//
//		if (userChoice == compChoice)
//		{
//			std::cout << "It's a tie!\n";
//		}
//
//		else {
//			bool userWon;
//			/*
//			* This is a nice idea but it won't work. `switch` statements only accept one argument.
//			* 
//			switch (userChoice, compChoice)
//			{
//			case(1, 2):  // Rock -- Paper
//				userWon = false;
//				break;
//			case(1, 3): // Rock -- Scissors 
//				userWon = true;
//				break;
//			case(2, 1): // Paper -- Rock
//				userWon = true;
//				break;
//			case(2, 3): // Paper -- Scissors
//				userWon = false;
//				break;
//			case(3, 1): // Scissors -- Rock
//				userWon = false;
//				break;
//			case(3, 2): // Scissors -- Paper
//				userWon = true;
//				break;
//			
//			*/
//
//			if (userWon)
//				std::cout << "You Won!";
//			else
//				std::cout << "You lost.";
//
//			ended = true;
//			}
//		}
//
//	} while (!ended);
//}