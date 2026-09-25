// Parsing Strings
#include <iostream>
#include <sstream>

using namespace std;

struct Movie
{
    string title;
    int year;
};

Movie parseMovie(string str) {
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;

    return movie;
}

int main() {
    auto movie = parseMovie("King Kong, 2005");
    cout << movie.title << endl;
    cout << movie.year << endl;

    // string str = "11 19";
    // stringstream stream;
    // stream.str(str);
    //
    // int first;
    // stream >> first;
    //
    // int second;
    // stream >> second;
    //
    // cout << first + second; // 30

    return 0;
}
