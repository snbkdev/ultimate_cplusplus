//
// Created by Asanbek Samudin on 29/9/26.
//

#ifndef LESSON_17_SMARTPOINTER_H
#define LESSON_17_SMARTPOINTER_H


class SmartPointer
{
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
private:
    int* ptr;
};


#endif //LESSON_17_SMARTPOINTER_H
