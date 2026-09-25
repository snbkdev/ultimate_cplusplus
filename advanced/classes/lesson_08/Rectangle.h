//
// Created by Asanbek Samudin on 25/9/26.
//

#ifndef LESSON_08_RECTANGLE_H
#define LESSON_08_RECTANGLE_H


class Rectangle {
public:
    Rectangle(int width, int height);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
private:
    int width = 0;
    int height = 0;
};

#endif //LESSON_08_RECTANGLE_H
