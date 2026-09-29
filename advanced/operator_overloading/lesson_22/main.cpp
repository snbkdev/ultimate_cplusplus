// Overloading the Spaceship Operator
#include <iostream>
#include "Length.h"

using namespace std;

int main() {
    Length first{30};
    Length second{20};

    if (first < second)
        cout << "First is smaller" << endl;

    // int x = 10;
    // int y = 20;
    // auto result = x <=> y;      // Spaceship Operator
    //
    // if (result == strong_ordering::less) {}
    // else if (result == strong_ordering::greater) {}

    return 0;
}
