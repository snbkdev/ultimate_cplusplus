// Working with Shared Pointers
#include <iostream>
#include <memory>

using namespace std;

int main() {
    auto x = make_shared<int>();
    // shared_ptr<int> x = make_shared<int>();
    *x = 10;

    shared_ptr<int> y(x);
    if (x == y)
        cout << "Equal" << endl;

    cout << "y = " << *y << " | " << "x = " << *x << endl;

    return 0;
}