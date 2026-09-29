//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_16_RECTANGLE_H
#define LESSON_16_RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
public:
    Rectangle() = default; // Default Constructor
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);

    void draw() const;
    int getArea() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int height);
private:
    int width = 0;
    int height = 0;
    string color;
};

#endif //LESSON_16_RECTANGLE_H
