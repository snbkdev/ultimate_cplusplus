//
// Created by Asanbek Samudin on 25/9/26.
//

#ifndef LESSON_06_RECTANGLE_H
#define LESSON_06_RECTANGLE_H


class Rectangle {
public:
    void draw();
    int getArea();
    // Getter (accessor)
    int getWidth();
    // Setter (mutator)
    void setWidth(int width);
private:
    int width;
    int height;

public:
    int getHeight() const;
    void setHeight(int height);
};


#endif //LESSON_06_RECTANGLE_H
