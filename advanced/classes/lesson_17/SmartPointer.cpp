//
// Created by Asanbek Samudin on 29/9/26.
//

#include "SmartPointer.h"

SmartPointer::SmartPointer(int* ptr) : ptr{ptr} {

}

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;
}
