#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Super Class
class Chef {
public:
	void makeChicken() {
		cout << "The chef makes yummy chicken" << endl;
	}
	void makeSalad() {
		cout << "The chef makes salad" << endl;
	}
	void makeSpecialDish() {
		cout << "The chef makes bbq ribs" << endl;
	}
};

// Sub class
class ItalianChef : public Chef {
public:
	void makePasta() {
		cout << "The chef makes pasta" << endl;
	}
	void makeSpecialDish() {
		cout << "The chef makes chicken parm" << endl;
	}
};


int main()
{
	Chef chef;
	chef.makeChicken();
	chef.makeSpecialDish();

	ItalianChef italianChef;
	italianChef.makeChicken();
	italianChef.makePasta();
	italianChef.makeSpecialDish();

	return 0;
}