#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Book {
public:
	string title;
	string author;
	int pages;

	Book() {
		title = "no title";
		author = "no auther";
		pages = 0;
		cout << "Creating Object... null" << endl;
	}

	Book(string title, string author, int pages) {
		this->title = title;
		this->author = author;
		this->pages = pages;
		cout << "Creating Object... " + title << endl;
	}
};


int main()
{
	Book book1("Harry Potter", "A", 1);
	Book book2("LOTR", "B", 2);
	Book book3("News", "C", 3);
	Book book4;

	cout << "Book1: " << book1.title << endl;
	cout << "Book2: " << book2.title << endl;
	cout << "Book3: " << book3.title << endl;
	cout << "Book4: " << book4.title << endl;

	return 0;
}