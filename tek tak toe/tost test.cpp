/*Write a function named coinToss that simulates the tossing of a coin. When you call the function,
it should generate a random number in the range of 1 through 2. If the random number is 1,
the function should display "heads", if it is 2, it should display "tails". Demonstrate the function in a program that asks the user
how many times the coin should be tossed, and then simulates the tossing of the coin that number of times.
*/

#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>



using namespace std;
int coinToss(void) {
	int randomNumber;
	randomNumber = 1 + rand() % 2;

	return randomNumber;
}
int main() {

	int howManyTimes = 0;
	int randomNumber = 0;
	string headTail = "";

	cout << "how man times would you like to toss the coin?: ";
	cin >> howManyTimes;

	srand((time(0)));

	for (int i = 1; i <= howManyTimes; i++) {
		randomNumber = coinToss();
		if (randomNumber == 1)
			headTail = "head";
		else
			headTail = "tail";
		cout << headTail << endl;

	}


	getch();
	return 0;
}
