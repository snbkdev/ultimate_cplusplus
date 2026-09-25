// Writing to Binary Files
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numbers[] = {1000000, 2000000, 3000000};
    ofstream file("numbers.dat", ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
        // for (auto number: numbers)
        //     file << number << endl;
        file.close();
    }

    return 0;
}
