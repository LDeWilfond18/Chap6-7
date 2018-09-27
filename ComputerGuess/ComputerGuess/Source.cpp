#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

	int numChoice;
	int secret;
	int count = 1;
	srand(time(NULL));

	cout << "Please enter a Number 1 - 100";
	cin >> secret;
	do {
		
		numChoice = rand() % 100 + 1;
		if (numChoice > secret)
		{
			cout << "The number you have chose is too high! guess again" << endl;
		}
		else if (numChoice < secret)
		{
			cout << "The number you have chose is too low! guess again" << endl;
		}
		count = count + 1;
	} while (numChoice != secret);
		cout << "Congratulations! It took you " << count << " tries!" << endl;
	system("pause");
	return 0;
}