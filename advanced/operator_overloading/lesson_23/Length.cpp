//
// Created by Asanbek Samudin on 29/9/26.
//

#include "Length.h"

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

strong_ordering Length::operator<=>(const Length& other) const {
    return value <=> other.value;
}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    this->value = value;
}

ostream& operator<<(ostream& stream, const Length& length) {
    stream << length.getValue();
    return stream;
}

