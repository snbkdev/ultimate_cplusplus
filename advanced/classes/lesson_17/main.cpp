// Pointer to Objects

#include <iostream>
#include <memory>
#include "Rectangle.h"
#include "SmartPointer.h"

using namespace std;

int main() {
    SmartPointer ptr{new int};

    // auto rectangle = make_unique<Rectangle>(10, 20);
    // rectangle->draw();

    // auto* rectangle = new Rectangle(10, 20);
    // rectangle->draw();
    // delete rectangle;
    // rectangle = nullptr;


    return 0;
}
