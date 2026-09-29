// Overloading the Stream Extraction Operator

#include <iostream>
#include "Length.h"
using namespace std;

int main() {
    Length length{10};
    cout << "Length: " << endl;
    cin >> length;
    cout << length << endl;

    return 0;
}
