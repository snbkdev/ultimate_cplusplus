// String_Numeric Conversion Functions
#include <iostream>
using namespace std;

int main() {
    string str = to_string(19);
    cout << str << endl; // 19

    string str2 = to_string(19.99);
    cout << str2 << endl; // 19.990000

    double price = stod("17.88");
    cout << price << endl; // 17.88

    double price2 = stod("17.88x");
    cout << price2 << endl; // 17.88

    double price3 = stod("17.8x8");
    cout << price3 << endl; // 17.8

    double price4 = stod("17.x88");
    cout << price4 << endl; // 17

    double price5 = stod("x17.88");
    cout << price5 << endl; // libc++abi: terminating due to uncaught exception of type std::invalid_argument: stod: no conversion

    return 0;
}