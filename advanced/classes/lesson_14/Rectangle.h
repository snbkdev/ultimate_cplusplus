//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_14_RECTANGLE_H
#define LESSON_14_RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
public:
    // static int objectsCount; // Static Member
    Rectangle() = default; // Default Constructor
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    ~Rectangle(); // Destructor
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);

    static int getObjectsCount();
private:
    int width = 0;
    int height = 0;
    string color;
    static int objectsCount; // Static Member
};

#endif //LESSON_14_RECTANGLE_H
