//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_12_RECTANGLE_H
#define LESSON_12_RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
public:
    Rectangle() = default; // Default Constructor
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
private:
    int width = 0;
    int height = 0;
    string color;
};


#endif //LESSON_09_RECTANGLE_H
