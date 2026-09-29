//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_21_LENGTH_H
#define LESSON_21_LENGTH_H

class Length
{
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    bool operator!=(int other) const;
    bool operator<(const Length& other) const;
    bool operator<=(const Length& other) const;
    bool operator>(const Length& other) const;
    bool operator>=(const Length& other) const;
private:
    int value;
};

#endif //LESSON_21_LENGTH_H
