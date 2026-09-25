// Reading from Streams
#include <iostream>
using namespace std;

int main() {
    // Buffer: temporary storage
    // []
    cout << "First: ";
    int first;
    cin >> first;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin.ignore(10, '\n');

    cout << "Second: ";
    int second;
    cin >> second;

    cout << "You entered " << first << " and " << second << endl;

    return 0;
}
