#include <iostream>
#include <vector>

using namespace std;

struct Movie
{
    string title;
    int releaseYear;
    bool isPopular;
};

int main() {
    vector<Movie> movies;
    // Movie movie {"King Kong", 2005};
    movies.push_back({"King Kong", 2005});
    movies.push_back({"District 9", 2009});
    movies.push_back({"Rango", 2011});

    for (const auto& movie: movies)
        cout << movie.title << endl;

    return 0;
}
