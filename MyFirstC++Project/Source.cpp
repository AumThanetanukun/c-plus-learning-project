#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int age = 26;
	int *pAge = &age;
	double gpa = 2.7;
	double *pGpa = &gpa;
	string name = "Aum";
	string* pName = &name;

	// Pointer or Memory Address
	cout << "Age :" << &age << endl;
	cout << "GPA :" << &gpa << endl;
	cout << "Name :" << &name << endl;

	cout << "Age (Pointer Variable) :" << pAge << endl;
	cout << "GPA (Pointer Variable) :" << pGpa << endl;
	cout << "Name (Pointer Variable) :" << pName << endl;

	cout << "Age (Value from Pointer) :" << *pAge << endl;
	cout << "GPA (Value from Pointer) :" << *pGpa << endl;
	cout << "Name (Value from Pointer) :" << *pName << endl;

	cout << "Age (*&) :" << *&*&age << endl;
	cout << "GPA (*&) :" << *&*&gpa << endl;
	cout << "Name (*&) :" << *&*&name << endl;

	return 0;
}