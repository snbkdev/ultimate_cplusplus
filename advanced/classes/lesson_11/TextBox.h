//
// Created by Asanbek Samudin on 25/9/26.
//

#ifndef LESSON_11_TEXTBOX_H
#define LESSON_11_TEXTBOX_H

#include <string>
using namespace std;

class TextBox
{
public:
    TextBox() = default;
    explicit TextBox(const string& value);
    string getValue();
    void setValue(const string& value);
private:
    string value;
};


#endif //LESSON_11_TEXTBOX_H
