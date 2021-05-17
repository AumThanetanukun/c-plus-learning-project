#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Student {
public:
	string name;
	string major;
	double gpa;

	Student() {
		name = "null";
		major = "null";
		gpa = 0.0;
		cout << "Creating Object... " + name << endl;
	}

	Student(string name, string major, double gpa) {
		this->name = name;
		this->major = major;
		this->gpa = gpa;
		cout << "Creating Object... " + name << endl;
	}

	bool hasHonours() {
		if (gpa >= 3.5) {
			return true;
		}
		return false;
	}
};


int main()
{
	Student student1("Jim", "Business", 2.4);
	Student student2("Pam", "Art", 3.6);

	cout << "student1: " << student1.hasHonours() << endl;
	cout << "student2: " << student2.hasHonours() << endl;

	return 0;
}