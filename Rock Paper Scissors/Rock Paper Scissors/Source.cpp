#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	srand(time(NULL));
	int userChoice;
	int compChoice;
	string result;
	compChoice = rand() % 3 + 1;
	cout << "Rock - 1, Paper - 2, or Scissors - 3";
	cin >> userChoice;

	if (compChoice == 1) {
		if (userChoice == 1)
			result = "Tie";
		else if (userChoice == 2)
			result = "You win!";
		else
			result = "You lose...";
	}
	if (compChoice == 2) {
		if (userChoice == 2)
			result = "Tie";
		else if (userChoice == 3)
			result = "You win!";
		else
			result = "You lose...";
	}
	if (compChoice == 3) {
		if (userChoice == 3)
			result = "Tie";
		else if (userChoice == 1)
			result = "You win!";
		else
			result = "You lose...";
	}
	cout << result << endl;

	system("pause");
	return 0;
}