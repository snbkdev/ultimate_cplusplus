// Working with unique pointers
#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto numbers = make_unique<int[]>(10);
    auto x = make_unique<int>();
    auto y = make_unique<int>();
    // unique_ptr<int> x(new int);
    *x = 10;
    numbers[0] = 10;
    cout << *x << endl; // 10
    cout << numbers[0] << endl; // 10

    return 0;
}