// C strings

#include <iostream>

using namespace std;

int main() {
    // Null terminator (\0)
    char name[8] = {'A', 's', 'a', 'n', 'b', 'e', 'k', '\0'}; // Asanbek
    // String literal
    char cname[8] = "Asanbek"; // Asanbek
    // Character literal
    // cname[0] = 'm';

    char lastName[] = "Samudin uulu";

    if (strcmp(name, lastName) == 0)
        cout << "Equal";

    // strcat(name, lastName);
    // cout << name << endl; // AsanbekSamudin uulu

    // strcpy(name, lastName);
    // cout << name << endl; // Samudin uulu

    // cout << strlen(name); // 7

    return 0;
}