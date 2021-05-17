#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Book {
public:
	string title;
	string author;
	int pages;
};


int main()
{
	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	Book book2;
	book2.title = "LOTR";
	book2.author = "Unkown";
	book2.pages = 700;

	cout << book1.title << endl;
	cout << book2.title << endl;

	return 0;
}