// Searching Strings
#include <iostream>

using namespace std;

int main() {
    string name = "Asanbek Samudin uulu";

    cout << name.find_last_not_of(",.;") << endl; // 19

    // cout << name.find_first_not_of(",.;") << endl; // 0
    // cout << name.find_last_of("a") << endl; // 9
    // cout << name.find_first_of(",.;") << endl; // 18446744073709551615
    // cout << name.rfind('a') << endl; // 9 - starts search from the end

    // if (name.find('anbek') == -1)
    //     cout << "Doesn't Exist!!!" << endl; //

    // if (name.find('B') == -1)
    //     cout << "Doesn't Exist!!!" << endl; // Doesn't Exist!!!

    // cout << name.find('B') << endl; // 18446744073709551615
    // cout << name.find('a', 7) << endl; // 9
    // cout << name.find('a') << endl; // 2

    return 0;
}