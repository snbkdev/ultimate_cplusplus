//
// Created by Asanbek Samudin on 29/9/26.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height) {
    cout << "Constructing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
    cout << "Constructing a Rectangle with color";
    this -> color = color;
}

Rectangle::~Rectangle() {
    cout << "Destructor called" << endl;
}

void Rectangle::draw() const {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const {
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("width");
    // (*this).width = width;
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height");

    this->height = height;
}