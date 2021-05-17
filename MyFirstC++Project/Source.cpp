#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Movie {
private:
	string rating;

	void setRating(string rating) {
		if (rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R" || rating == "NR") {
			this->rating = rating;
		}
		else {
			cout << "Rating input error for " + title + " => " + rating << endl;
			this->rating = "NR"; // Not Rated
		}
	}

public:
	string title;
	string director;

	Movie(string title, string director, string rating) {
		this->title = title;
		this->director = director;
		setRating(rating);
	}
	string getRating() {
		return rating;
	}
};


int main()
{
	Movie avengers("The Avengers", "Joss Whedon", "PG-13");
	Movie ghost("The Ghost", "Unknown", "Dog");

	cout << "movie1: " << avengers.getRating() << endl;
	cout << "movie2: " << ghost.getRating() << endl;

	return 0;
}