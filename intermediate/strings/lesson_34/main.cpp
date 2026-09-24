// Escape Sequences
#include <iostream>
using namespace std;

int main() {
    string str6 = "Hello\tWorld";
    cout << str6 << endl; // Hello	World

    string str5 = "Hello\nWorld";
    cout << str5 << endl; // Hello
                            // World

    char ch = '\'abcdefg';
    cout << ch << endl; // g

    string str4 = "'Hello World'";
    cout << str4 << endl; // 'Hello World'

    string str3 = "\"Hello World\"";
    cout << str3 << endl; // "Hello World"

    string str = "c:\my_folder";
    cout << str << endl; // c:my_folder

    string str2 = "c:\\my_folder";
    cout << str2 << endl; // c:\my_folder

    return 0;
}