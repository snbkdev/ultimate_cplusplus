#include <iostream>
using namespace std;

void printNumbers(int numbers[]) {
    numbers[0] = 0;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60};
    // int* ptr = numbers;
    printNumbers(numbers);

    cout << numbers[0] << endl;;

    return 0;
}