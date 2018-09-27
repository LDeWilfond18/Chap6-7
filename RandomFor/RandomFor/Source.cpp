#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	srand(time(NULL));
	int numChoice;
	
	for (int x = 0; x <= 10; x = x + 1)
	{
		numChoice = rand() % 100 + 1;
		cout << numChoice << endl;
	}







	system("pause");
	return 0;
}