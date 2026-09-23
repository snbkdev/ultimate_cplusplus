#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main()
{
    int x = 10;
    int y =20;
    int* ptr = &x;
    *ptr *= 2;
    ptr = &y;
    *ptr *= 3;

    cout << y << " - " << x << endl; // 60 - 20

    return 0;
}

// int main()
// {
//     int number = 10;
//
//     // int* ptr = NULL; int* ptr = 0; - in old C++ versions
//     // The address of operator
//     int* ptr = &number;
//     // Indirection (de-referencing) operator
//     *ptr = 20;
//
//     cout << *ptr << " - " << number <<endl; // 20 - 20
//
//     return 0;
// }