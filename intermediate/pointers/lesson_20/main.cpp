// comparing pointers
#include <iostream>
using namespace std;

// Exercise
int main() {
    int numbers[] = {10, 20, 30, 40 ,50};
    int* ptr = &numbers[size(numbers) - 1];
    while (ptr >= numbers) {
        cout << *ptr << endl;
        ptr--;
    }
}


// int main() {
//   int x = 10;
//   int y = 20;
//
//   int* ptrX = &x;
//   int* ptrY = &x;
//
//   if (ptrX != nullptr)
//     cout << *ptrX << endl;
//
//   return 0;
// }