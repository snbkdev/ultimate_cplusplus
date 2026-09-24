// Working with characters
#include <iostream>
using namespace std;

bool isValid(string customerNumber) {
    if (customerNumber.length() != 9)
        return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNumber[i]))
            return false;

    for (int i = 2; i < customerNumber.length(); i++)
        if (!isdigit(customerNumber[i]))
            return false;

    return true;
}

int main() {
    string customerNUmber = "AB1234567";
    cout << isValid(customerNUmber);

    // string name = "lord of the rings";
    // cout << isalpha(name[0]) << endl; // 1
    // cout << isupper(name[0]) << endl; // 0
    // cout << isdigit(name[0]) << endl; // 0
    // cout << isspace(name[0]) << endl; // 0
    //
    // cout << (char) toupper('a') << endl; // A
    // cout << (char) toupper('1') << endl; // 1
    // cout << (char) tolower('C') << endl; // c
    // cout << (char) tolower('6') << endl; // 6

    return 0;
}