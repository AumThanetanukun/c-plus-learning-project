#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int getMax(int num1, int num2)
{
	if (num1>num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main()
{
	int num1;
	int num2;

	cout << "Please insert num1:" << endl;
	cin >> num1;

	cout << "Please insert num2:" << endl;
	cin >> num2;

	cout << "Max Number is: " + to_string(getMax(num1, num2));

	return 0;
}