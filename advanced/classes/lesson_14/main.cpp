// The Destructor + Lesson 15 - Static Members

#include <iostream>

#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle first{10, 20};
    Rectangle second{10, 20};
    cout << Rectangle::getObjectsCount() << endl;
    return 0;
}
