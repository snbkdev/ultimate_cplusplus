// Overloading the Equality Operator

#include <iostream>
#include "Point.h"
// #include "Length.h"

using namespace std;


int main() {
    Point first{10, 20};
    Point second{10, 20};
    cout << (first == second) << endl; // 1

    // Length first{10};
    // Length second{10};
    //
    // // if (first == second)
    //
    // if (first != 10)

    return 0;
}
