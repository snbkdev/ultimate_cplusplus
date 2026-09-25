// Converting Values to Strings
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_string(double number, int precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return  stream.str();
}

int main() {
    double number = 12.45;

    cout << to_string(number, 2);

    return 0;
}
