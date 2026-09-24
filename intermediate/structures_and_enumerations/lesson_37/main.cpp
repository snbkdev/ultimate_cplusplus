// Defining Structures
#include <iostream>
using namespace std;

// PascalCase
// struct Movie {
//     string title;
//     int releaseYear;
// };

struct Customer{
    int id;
    string name;
    string email;
};

int main() {
    Customer customer;

    cout << "ID: ";
    cin >> customer.id;

    cout << "Name: ";
    cin >> customer.name;

    cout << "Email: ";
    cin >> customer.email;

    // Movie movie;
    // movie.title = "King Kong";
    // movie.releaseYear = 2005;
    //
    // cout << "Title: " << movie.title << endl; // Title: King Kong
    // cout << "Release year: " << movie.releaseYear << endl; // Release year: 2005

    return 0;
}
