#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40};
    cout << numeric_limits<long long>::min() <<endl;
    cout << numeric_limits<long long>::max() <<endl;
    cout << numeric_limits<size_t>::min() <<endl;
    cout << numeric_limits<size_t>::max() <<endl;
    // cout << sizeof(size_t) << endl;

    return 0;
}