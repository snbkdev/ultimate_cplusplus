// Extracting Subsctrings
#include <iostream>

using namespace std;

int main() {


    string name = "Shaquille Rashaun O'Neal";
    auto index = name.rfind(' ');
    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);

    cout << lastName << endl; // O'Neal

    // string name = "Asanbek Samudin uulu";
    // auto index = name.find(' ');

    // string firstName = name.substr(0, index);
    // string lastName = name.substr(index + 1);
    //
    // cout << firstName << endl; // Asanbek
    // cout << lastName << endl; // Samudin uulu


    // string copy = name.substr(8, 3);
    // cout << copy; // Sam

    // string copy = name.substr(8);
    // cout << copy; // Samudin uulu

    // string copy = name.substr();
    // name = "";
    // cout << copy; //  Asanbek Samudin uulu

    return 0;
}