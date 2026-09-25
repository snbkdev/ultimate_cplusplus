//
// Created by Asanbek Samudin on 25/9/26.
//

#include "TextBox.h"

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}

TextBox::TextBox(const string &value) : value{value}{

}
