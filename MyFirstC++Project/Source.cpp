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
	case 2:
		return "Tuesday";
		break;
	case 3:
		return "Wednesday";
		break;
	case 4:
		return "Thursday";
		break;
	case 5:
		return "Friday";
		break;
	case 6:
		return "Saturday";
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

	while (num1 < 10) {
		cout << "Result = " + getDayOfWeek(num1) << endl;
		num1++;
	}

	return 0;
}