//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_22_LENGTH_H
#define LESSON_22_LENGTH_H

#include <compare>
using namespace std;

class Length
{
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    strong_ordering operator<=>(const Length& other) const;
private:
    int value;
};

#endif //LESSON_22_LENGTH_H
