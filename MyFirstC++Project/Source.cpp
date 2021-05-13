#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int operation(int num1, int num2, char op) {
	if (op == '+') {
		return num1 + num2;
	}
	else if(op == '-') {
		return num1 - num2;
	}
	else if (op == '*') {
		return num1 * num2;
	}
	else if (op == '/') {
		return num1 / num2;
	}
	else {
		return -1;
	}
}

int main()
{
	int num1;
	int num2;
	char op;

	cout << "Please insert num1:" << endl;
	cin >> num1;

	cout << "Please insert operator:" << endl;
	cin >> op;

	cout << "Please insert num2:" << endl;
	cin >> num2;

	cout << "Result = " + to_string(operation(num1, num2, op));

	return 0;
}