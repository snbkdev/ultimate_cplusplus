// Access Modifiers + Lesson 07 - Getters and Setters
#include <iostream>
#include "TextBox.h"

using namespace std;

int main() {
    TextBox box;
    box.setValue("Hello World!!");
    cout << box.getValue();

    return 0;
}
