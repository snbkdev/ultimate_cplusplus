// pointers and constants

#include <iostream>
using namespace std;

int main()
{
    // int x = 10;
    // int* const ptr = &x;
    
    const int x = 10;
    const int* ptr = &x;

    int y = 20;
    ptr = &y;

    return 0;
}