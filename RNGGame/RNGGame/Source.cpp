#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	do {
		int secret;
		int numChoice;
		srand(time(NULL));
		secret = rand() % 100 + 1;
		cout << "Enter a number: ";
		cin >> numChoice;
		if (numChoice < secret) {
			cout << "The Number is higher ";
		}
		else if (numChoice > secret) {
			cout << "The Number is lower ";
		}
		else if (numChoice == secret) {
			cout << "You Win!";
		}
		else {
			cout << "This is not a choice";
		}
	} while ();

	system ("pause");
	return 0;
}