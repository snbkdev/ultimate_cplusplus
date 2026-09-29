//
// Created by Asanbek Samudin on 29/9/26.
//

#include "Point.h"

int Point::x1() const {
    return x;
}

void Point::x1(int x) {
    this->x = x;
}

int Point::y1() const {
    return y;
}

void Point::y1(int y) {
    this->y = y;
}

bool Point::operator==(const Point& other) const {
    return (x== other.x) && (y == other.y);
}

ostream& operator<<(ostream& stream, const Point& point) {
    stream << "(" << point.x1() << ", " << point.y1() << ")";
    return stream;
}


Point::Point(int x, int y) : x(x), y(y) {}
