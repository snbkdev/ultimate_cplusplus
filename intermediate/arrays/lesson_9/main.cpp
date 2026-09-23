#include <iostream>
using namespace std;

int main()
{
    int values[3] = {10, 20, 30};
    auto [x, y, z] = values;
    cout << x << ", " << y << ", " << z;
    // C++: structured binding
    // Javascript: destructuring
    // Python: unpacking

    // int x = values[0];
    // int y = values[1];
    // int z = values[2];

    return 0;
}