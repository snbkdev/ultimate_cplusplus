// Overloading the Stream Insertion Operator

#include <iostream>
#include "Length.h"
#include "Point.h"

using namespace std;

int main() {
    Point first{10, 20};
    Point second{10, 21};

    cout << first;

    // Length length{10};
    // cout << 1 << 2 << 3;

    return 0;
}
