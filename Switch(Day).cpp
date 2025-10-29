#include<iostream>
using namespace std;
int main() {
	int Day;
	cout << "Enter a number:";
	cin >> Day;
	switch (Day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednessday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	default:
		cout << "Weekend";
	}
	return 0;
}