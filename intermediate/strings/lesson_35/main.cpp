// Raw Strings
#include <iostream>
using namespace std;

int main() {
    string str2 = R"(c:\folderA\folderB\file.txt)";
    cout << str2 << endl; // c:\folderA\folderB\file.txt

    string str = "c:\\folderA\\folderB\\file.txt";
    cout << str << endl; // c:\folderA\folderB\file.txt

    return 0;
}