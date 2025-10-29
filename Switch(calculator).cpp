#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter numbers:";
	cin >> a >> b;
	char op;
	cout << "Enter Operator(+,-,*,/,%):";
	cin >> op;
	switch (op) {
	case'+':
		cout << "Addition=" << a + b;
		break;
	case '-':
		cout << "Subtraction=" << a - b;
		break;
	case '*':
		cout << "Multiplication=" << a * b;
		break;
	case '/':
		cout << "Division=" << a / b;
		break;
	case '%':
		cout << "Modulus=" << a % b;
	default:
		cout << "Invalid";
	}
	return 0;
}