#include<iostream>

using namespace std;

int showMenu(const char* menu[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << menu[i] << endl;
	}
	cout << "Choice menu item";
	int choice;
	cin >> choice;
	return choice;
}

int main() {
	const char* menu1[2] = {
		"First",
		"Second"
	};
	const char* menu2[3] = {
		"Uno",
		"Dos",
		"Tres"
	};
	cout << showMenu(menu1, 2) << endl;
	cout << showMenu(menu2, 3) << endl;
	
}