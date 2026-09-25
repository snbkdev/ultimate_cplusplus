#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

// PointA PointB => Bool
bool operator==(const Point& first, const Point& second) {
    return (first.x == second.x && first.y == second.y);
}

// stream, point => stream
ostream& operator<<(ostream& stream, const Point& point) {
    return stream << "(" << point.x << ", " << point.y << ")";
    //return stream;
}

int main() {
    Point x = {1, 2};
    Point y = {1, 3};
    // cout << (x == y);

    cout << x;

    return 0;
}
