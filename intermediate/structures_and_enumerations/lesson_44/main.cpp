// Operator Overloading
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
};

//
bool operator==(const Movie& first, const Movie& second) {
    return (first.title == second.title && first.releaseDate.year == second.releaseDate.year
    && first.releaseDate.month == second.releaseDate.month
    && first.releaseDate.day == second.releaseDate.day);
};

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream;
}

int main() {
    Movie movie1 = {"King Kong", {2005, 3, 28}};
    Movie movie2 = {"King Kong", {2005, 3, 28}};

    cout << movie1 << endl;

    // if (movie1 == movie2)
    //     cout << "Equals" << endl;

    return 0;
}
