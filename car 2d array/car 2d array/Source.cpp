#include <iostream>
#include <iomanip>
using namespace std;

const int CARS = 0, TRUCKS = 0;
const int BLUE = 0, RED = 0;
const int ROWS = 2, COLS = 2;

int main()
{
	double inventory[ROWS][COLS];

	cout << "How many blue cars are available? ";
	cin >> inventory[CARS][BLUE];

	cout << "How many red cars are available? ";
	cin >> inventory[CARS][RED];

	cout << "How many blue trucks are available? ";
	cin >> inventory[TRUCKS][BLUE];

	cout << "How many red trucks are available? ";
	cin >> inventory[TRUCKS][RED];

	cout << "\n *** Available Inventory ***\n";

	for (int i = 0; i < COLS; i++)
	{
		if (i == 0)
			cout << "Blue ";
		else
			cout << "Red ";
		for (int j = 0; j < COLS; j++)
		{
			if (j == 0)
				cout << "Cars:\t";
			else
				cout << "Trucks:\t";
			cout << inventory[i][j] << endl;
		}
	}

	system("pause");
	return 0;
}