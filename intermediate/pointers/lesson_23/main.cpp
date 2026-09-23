// smart pointers

#include <iostream>
using namespace std;

int main() {
    int* x = new int;
    delete x;
    delete x;
    // lesson_23(60840,0x202f3e2c0) malloc: *** error for object 0x600003d9c010: pointer being freed was not allocated
    // lesson_23(60840,0x202f3e2c0) malloc: *** set a breakpoint in malloc_error_break to debug

    return 0;
}