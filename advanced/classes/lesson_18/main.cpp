// Array of Objects

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rectangles[] = {
        {},
        {10, 20},
        {10, 20, "red"}
    };

    for (Rectangle& rect: rectangles)
        rect.draw();

    // Rectangle rectangles[] = {
    //     Rectangle(),
    //     Rectangle(10, 20),
    //     Rectangle(10, 20, "yellow")
    // };

    return 0;
}
