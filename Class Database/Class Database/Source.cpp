#include <iostream>
#include <string>

using namespace std;

int main() {

	int id;
	int cont;
	string result;
	do {
	cout << "Please scan your bar code >> ";
	cin >> id;
	
		switch (id)
		{
		case 102094:
			result = "John Brosius\n";
			break;
		case 316338:
			result = "Logan DeWilfond\n";
			break;
		case 138082:
			result = "Jack Reis\n";
			break;
		case 313011:
			result = "Aaron Lang\n";
			break;
		case 154824:
			result = "Kaden Graap\n";
			break;
		case 137428:
			result = "Mason Hancock\n";
			break;
		case 137220:
			result = "Adam Gibosn\n";
			break;
		case 145884:
			result = "Michael France\n";
			break;
		case 306632:
			result = "Evan Raker\n";
			break;
		case 154827:
			result = "Austin Leuenhagen\n";
			break;
		case 155706:
			result = "Joseph Chalupa\n";
			break;
		case 134125:
			result = "Jimmy Pham Ho\n";
			break;
		case 318682:
			result = "Jacob Grady\n";
			break;
		case 155980:
			result = "Chayton Lofgren\n";
			break;
		case 137292:
			result = "Brandon Richards\n";
			break;
		case 137112:
			result = "Adam Burton\n";
			break;
		default:
			result = "Not found!\n";
			
		}
		cout << result;
		cout << "Would you like to do this again? \n1- yes\n2-no";
		cin >> cont;
	} while(cont != 2);

	system("pause");
	return 0;
}