//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_23_LENGTH_H
#define LESSON_23_LENGTH_H

#include <compare>
#include <ostream>
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
};

ostream& operator<<(ostream& stream, const Length& length);

#endif //LESSON_23_LENGTH_H
