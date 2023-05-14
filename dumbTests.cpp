#include <iostream>
#include "myfunctions.h"

void printAndClear()
{
	for (int i = 0; i < 5; i++) {
		{
			for (int j = 0; j < 10; j++) {
				std::cout << ('#' * j);
				std::cout.clear();
			}
		}
	}
}