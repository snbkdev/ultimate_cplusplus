//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_25_LENGTH_H
#define LESSON_25_LENGTH_H


#include <compare>
#include <ostream>
#include <iostream>

using namespace std;

class Length
{
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    strong_ordering operator<=>(const Length& other) const;

    int getValue() const;
    void setValue(int value);
private:
    int value;
    int x;
    friend ostream& operator<<(ostream& stream, const Length& length); // Friendly class
};

ostream& operator<<(ostream& stream, const Length& length);
istream& operator>>(istream& stream, Length& length);


#endif //LESSON_25_LENGTH_H
