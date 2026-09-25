// Writing to Text Files
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ofstream file;
    file.open("data.csv");
    if (file.is_open()) {
        // CSV: Comma Separated Value
        file << "id,title,year\n"
            << "1, King Kong, 2005\n"
            << "2, District 9, 2009\n"
            << "3, Rango, 2011\n";
        
        // file << "1, King Kong, 2005" << endl;
        // file << "2, District 9, 2009" << endl;
        // file << "3, Rango, 2011" << endl;
        //file << setw(20) << "Hello" << setw(20) << "world!!!" << endl;
        file.close();
    }

    return 0;
}
