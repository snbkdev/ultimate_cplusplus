// Overloading the Arithmetic Operators

#include <iostream>
#include "Length.h"

using namespace std;

int main() {
    Length first{10};
    Length second{23};
    Length third = first + second;
    cout << third;

    return 0;
}
