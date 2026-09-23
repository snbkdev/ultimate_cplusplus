#include <iostream>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main()
{
    int first[] = {10, 20, 30};
    int second[size(first)];

    for (int i = 0; i < size(first); i++)
        second[i] = first[i];

    for (int number: second)
        cout << number << endl;

    return 0;
}