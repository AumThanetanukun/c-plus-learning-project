#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void sayHi(string name, int age);

int main()
{
	sayHi("Aum", 26);

	return 0;
}

void sayHi(string name, int age)
{
	cout << "Hello " + name + ", you are " + to_string(age) + " years old." << endl;
}