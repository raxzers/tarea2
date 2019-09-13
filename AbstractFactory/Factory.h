//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_FACTORY_H
#define ABSTRACTFACTORY_FACTORY_H


#include "Widget.h"

class Factory {
public:
    virtual Widget *create_button() = 0;
    virtual Widget *create_menu() = 0;
};

#endif //ABSTRACTFACTORY_FACTORY_H
