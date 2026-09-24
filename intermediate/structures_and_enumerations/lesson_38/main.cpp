// Initializing Structures
#include <iostream>
using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    Movie movie = {"King Kong", 2005};

    cout << movie.releaseYear << endl; // 2005

    return 0;
}
