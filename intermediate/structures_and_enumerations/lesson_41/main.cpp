// Nesting Structures
#include <iostream>
using namespace std;

struct Address
{
    string street;
    string city;
    int zipCode;
};

struct Customer
{
    int id = 0;
    string name;
    string email;
    Address address;
};

int main() {
    Customer customer = {
        1, "Asanbek", "test@example.com", {
            "24 Santa Monica Blvd", "Los Angeles", 90401
        }
    };

    cout << "Address: " << customer.address.street << endl;

    return 0;
}


// struct Date {
//     short year = 1900;
//     short month = 1;
//     short day = 1;
// };
//
// struct Movie {
//     string title;
//     Date releaseDate;
//     bool isPopular;
// };
//
// int main() {
//     // Date date {2005, 3, 28};
//     Movie movie {"King Kong", {2005, 3, 28}};
//     cout << movie.releaseDate.year << endl;
//
//     return 0;
// }
