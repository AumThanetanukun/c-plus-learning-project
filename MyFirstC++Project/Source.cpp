#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string getDayOfWeek(int dayNum) {
	
	switch (dayNum) {
	case 0:
		return "Sunday";
		break;
	case 1:
		return "Monday";
		break;
	default:
		return "Invalid";
	}
}

int main()
{
	int num1;
	cout << "Please insert num1:" << endl;
	cin >> num1;

	cout << "Result = " + getDayOfWeek(num1);

	return 0;
}