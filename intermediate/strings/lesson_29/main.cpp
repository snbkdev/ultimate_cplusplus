// Modifying Strings
#include <iostream>

using namespace std;

int main() {
    string name = "Asanbek";
    name.replace(0, 2, "AS");
    cout << name; // ASanbek

    // name.clear();
    // cout << name; //

    // name.erase(0, 2);
    // cout << name << endl; // anbek

    // name.insert(0, "I am ");
    // cout << name << endl; // I am Asanbek

    // name.append(" Samudin uulu");
    // cout << name << endl; //Asanbek Samudin uulu

    return 0;
}