//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_WINDOWSFACTORY_H
#define ABSTRACTFACTORY_WINDOWSFACTORY_H


#include "Factory.h"
#include "WindowsButton.h"
#include "WindowsMenu.h"

class WindowsFactory : public Factory {
public:
    Widget *create_button() {
        return new WindowsButton;
    }
    Widget *create_menu() {
        return new WindowsMenu;
    }
};



#endif //ABSTRACTFACTORY_WINDOWSFACTORY_H
