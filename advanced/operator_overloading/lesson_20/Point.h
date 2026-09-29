//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_20_POINT_H
#define LESSON_20_POINT_H


class Point
{
public:
    Point(int x, int y);

    int x1() const;
    void x1(int x);
    int y1() const;
    void y1(int y);
    bool operator==(const Point& other) const;
private:
    int x;
    int y;
};


#endif //LESSON_20_POINT_H
