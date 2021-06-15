//
// Created by afetter on 6/15/21.
//

#include "Custom_Widget.h"

class Using_Widget {
public:
    Using_Widget();
    ~Using_Widget();

    void useMyWidget();
private:
    Custom_Widget *myWidget;

};

Using_Widget::Using_Widget() = default;

Using_Widget::~Using_Widget() {
    delete myWidget;
}

void Using_Widget::useMyWidget() {
    myWidget = new Custom_Widget();
    myWidget->show();
}
