// Unpacking Structures
#include <iostream>
using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    Movie movie = {"King Kong", 2005, true};
    // string title = movie.title;
    // int releseYear = movie.releaseYear;
    // bool isPopular = movie.isPopular;
    auto [title, releaseYear, isPopular] {movie};

    cout << title << endl; // King Kong
    cout << releaseYear << endl; // 2005
    cout << isPopular << endl; // 1

    return 0;
}
