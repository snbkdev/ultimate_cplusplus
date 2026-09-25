//
// Created by Asanbek Samudin on 25/9/26.
//

#ifndef LESSON_06_TEXTBOX_H
#define LESSON_06_TEXTBOX_H

#include <string>
using namespace std;

class TextBox {
public:
    string getValue();
    void setValue(const string& value);
private:
    string value;
};


#endif //LESSON_06_TEXTBOX_H
