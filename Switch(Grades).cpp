#include<iostream>
using namespace std;
int main() {
	int marks;
	cout << "Enter your marks";
	cin >> marks;
	switch (marks/10) {
	case 10:
	case 9:
		cout << "A";
		break;
	case 8:
			cout << "B";
		break;
	case 7:
			cout << "C";
	case 6:
			cout << "D";
	case 5:
			cout << "E";
	default:
		cout << "F";
	}
	return 0;
}