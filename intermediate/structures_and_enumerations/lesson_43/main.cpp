// Working with Methods
#include <iostream>
using namespace std;

struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular;

    // Methods
    bool equals(const Movie& movie) {
        return (title == movie.title && releaseDate.year == movie.releaseDate.year
        && releaseDate.month == movie.releaseDate.month
        && releaseDate.day == movie.releaseDate.day);
    };
};

int main() {
    Movie movie1 = {"King Kong", {2005, 3, 28}};
    Movie movie2 = {"King Kong", {2005, 3, 28}};

    if (movie1.equals(movie2))
        cout << "Equals" << endl;

    return 0;
}
