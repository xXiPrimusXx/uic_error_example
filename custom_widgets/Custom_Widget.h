//
// Created by afetter on 6/15/21.
//

#ifndef UIC_ERROR_EXAMPLE_CUSTOM_WIDGET_H
#define UIC_ERROR_EXAMPLE_CUSTOM_WIDGET_H

#include "ui_customwidget.h"
#include <QDialog>
#include <string>

class Custom_Widget : public QDialog, private Ui::customWidget{
    Q_OBJECT
public:
    explicit Custom_Widget( QWidget *_parent = nullptr, Qt::WindowFlags _flags = 0);
    ~Custom_Widget();
    void DoSomething(std::string some_thing_to_say);

};


#endif //UIC_ERROR_EXAMPLE_CUSTOM_WIDGET_H
