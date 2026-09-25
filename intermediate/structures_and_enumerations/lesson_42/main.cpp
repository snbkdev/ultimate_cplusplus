// Comparing Structures
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

int main() {
    // Date date {2005, 3, 28};
    Movie movie1 = {"King Kong", {2005, 3, 28}};
    Movie movie2 = {"King Kong", {2016, 3, 28}};

    if (movie1.title == movie2.title && movie1.releaseDate.year == movie2.releaseDate.year
        && movie1.releaseDate.month == movie2.releaseDate.month
        && movie1.releaseDate.day == movie2.releaseDate.day)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}
