#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;

	do{
		srand(time(NULL));
		secretBook = rand() % 57 + 1;
		
		cout << "Welcome to my chamber of Library of Information Services.";
		cout << "Otherwise known as LIS" << endl;
		cout << "There is a magic book, but only one. You get two tries to find it.\nIf you do not you will perish.\n";


		while (pickBook != secretBook && count != 2) {
			cout << "Choose your book by number >> ";
			cin >> pickBook;
			if (pickBook < secretBook) {
				cout << "The number was too low ";
			}
			else if (pickBook > secretBook) {
				cout << "The number was to high ";
			}
			else if (pickBook == secretBook) {
				cout << "You got my book but I am going to kill you anyway ";
			}
			count++;
		}
		if (count == 2) {
			cout << "Haha death by ISIS ";
		}
		else {
			cout << "Hey nice book ";
		}
		cout << "Would you like to play again?\n1 - Yes\n2 - No";
		cin >> again;
		pickBook = 0;
		count = 0;
	} while (again != 2);
	system("pause");
	return 0;
}