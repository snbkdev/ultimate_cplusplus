// Creating Objects
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.height = 20;
    cout << rectangle.getArea() << endl;

    Rectangle first;
    Rectangle second;
    cout << &first << endl;
    cout << &second << endl;

    return 0;
}
