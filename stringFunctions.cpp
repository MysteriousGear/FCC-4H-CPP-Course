#include "myfunctions.h"

int stringFunc()
{
	string name = "Ofek";
	
	/*length*/
	cout << "length: " << name.length() << endl; //4

	/*char at index*/
	cout << "char in index 2: " << name[2] << endl; //e

	/*string are NOT immutable*/
	//turn 'Ofek" into "Odell":
	name[1] = 'd'; //"Odek"
	name[3] = 'l'; //"Odel"
	name[4] = 'l'; //nope, still "Odel"
	
	//use concationation:
	name += 'l'; //"Odell"
	cout << name << endl;
	cout << "length: " << name.length() << endl; //5

	/*find()*/
	//index of a char
	cout << "index of 'd': " << name.find('d') << endl; //2
	cout << "index of 'h': " << name.find('h') << endl; //some random nonsene

	//index of a string
	cout << "index of \"del\": " << name.find("del",0) << endl; //1
	cout << "index of \"od\": " << name.find("od", 2) << endl; //some random nonsene

	//substring(startIndex, numOfChars)
	cout << "substring in indexes [0:2] is: " << name.substr(0,2) << endl; //"Od"
	cout << "substring in indexes [3:1] is: " << name.substr(3, 1) << endl; //"l"

	/*
	 * Now let's play with numbers too!
	 * TODO: divide this part into a separate file.
	 */

	cout << -4.13 << endl;
	cout << -10 << "\n";
	cout << 6 + 7 + 8 << endl;

	
	//div and mod
	cout << "7 div 2 = " << 7 / 2 << ", 7 mod 2 = " << 7%2 << endl;

	//incrementing a variable
	int myNum = 1;
	myNum++;
	myNum += 1;
	myNum *= 3;
	cout << "myNum: " << myNum << endl;
	
	//adding int to float
	cout << "(int)(7 + 3.5) = " << (int)(7 + 3.5) << endl; //10
	cout << "(float)(7 + 3.5) = " << (float)(7 + 3.5) << endl; //10.5
	cout << "Notice how 7 + 3.5 = " << (7 + 3.5) << endl; //10.5
	cout << "But 7 + 3.0 = " << (7 + 3.0) << endl; //10
	
	/*
	 * As we saw before, we can store the sum of an intger and a float inside an integer variable.
	 * The decimal part will be floored down.
	 */
	int sum = 3 + 6.9;
	cout << sum << endl; //9

	//dividing int and float
	cout << "10 / 3.0 = " << 10 / 3.0 << endl; // 3.3333...
	
	/*functions*/
	//pow
	cout << "i^3: " << pow(1, 3) << "," << pow(2, 3) << "," << pow(3, 3) << ",..." << endl;
	//sqrt
	cout << "sqrt: " << sqrt(16) << "," << sqrt(9) << "," << sqrt(4) << endl;
	//fmax
	cout << fmax(3, 7) << endl; //7
	//fmin
	cout << fmin(18, 2) << endl; //2
	
	
	return 0;
}
