//
// Created by afetter on 6/15/21.
//

#include <iostream>
#include "Custom_Widget.h"

Custom_Widget::Custom_Widget(QWidget *_parent, Qt::WindowFlags _flags) : QDialog(_parent, _flags) {
    setupUi(this);
}

void Custom_Widget::DoSomething(std::string some_thing_to_say) {
    std::cout << some_thing_to_say << std::endl;
}

Custom_Widget::~Custom_Widget() = default;


