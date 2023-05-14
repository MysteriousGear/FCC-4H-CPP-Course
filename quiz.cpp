#include <iostream>

int quiz()
{
	std::string questions[] = { "1. What year was C++ created?: ",
								"2. Who invented C++?: ",
								"3. What is the predecessor of C++?: ",
								"4. Is the earth flat?: " };

	std::string options[][4]  = { {"A. 1969", "B. 1979", "C. 1985", "D. 1989"},
						{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
						{"A. C", "B. C+", "C. C--", "D. E++"},
						{"A. yes", "B. no", "C. sometimes", "D. what's earth?"} };

	char answerKey[] = { 'C', 'B','A','B' };

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score = 0;

	

	for (int i = 0; i < size; i++)
	{
		std::cout << questions[i] << "\n";
		
		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
			std::cout << options[i][j] << " ";

		std::cout << "\n"; // after the final option

		std::cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i])
		{
			std::cout << "correct!";
			score++;
		}
		else
		{
			std::cout << "sorry, that's incorrect. \n" ;
			std::cout << "The correct answer: " << answerKey[i] << "\n";
		}
	
		std::cout << "\n";
	}
	std::cout << "Correct answers: " << score << "\n";
	std::cout << "# of questions: " << size << "\n";
	std::cout << "Final score: " << (score / (double)size) * 100 << "\n";

	return 0;
}