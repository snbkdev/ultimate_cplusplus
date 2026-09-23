// arithmetic

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int* ptr = numbers;

    // ptr++; // 20
    // ptr--; // 10
    cout << *ptr << endl; // 10
    cout << *(ptr + 1) << endl; // 20
    cout << ptr[1] << endl; // 20
    cout << numbers[1] << endl; // 20

    return 0;
}