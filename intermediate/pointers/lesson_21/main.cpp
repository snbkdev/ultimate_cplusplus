// Dynamic Memory Allocation

#include <iostream>
using namespace std;

int main() {
    // Stack
    // int numbers[10];
    int x;

    // Heap (Free Store)
    int* numbers = new int[10];
    int* number = new int;
    
    delete[] numbers;
    delete number;

    number = nullptr;
    numbers = nullptr;

    return 0;
}