#include <iostream>
#include <string>
using namespace std;

int main() {

	for (int x = 0; x <= 100; x = x + 5)
	{
		cout << x << endl;
		if (x == 50) {
			cout << "50" << endl;
		}
	}
	for (int i = 0; i <= 99; i = i + 3)
	{
		cout << i << endl;
		if (i == 48) {
			cout << "How did the headless chicken cross the road, in a KFC bucket" << endl;
		}
	}
	int answer;
	for (int z = 0; z <= 1000; z++) {
		if (z % 2 == 0 && z % 3 == 0) {
			cout << z;
		}
	}
	system("pause");
	return 0;
}