//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_LINUXFACTORY_H
#define ABSTRACTFACTORY_LINUXFACTORY_H


#include "Factory.h"
#include "LinuxButton.h"
#include "LinuxMenu.h"

class LinuxFactory : public Factory {
public:
    Widget *create_button() {
        return new LinuxButton;
    }
    Widget *create_menu() {
        return new LinuxMenu;
    }
};

#endif //ABSTRACTFACTORY_LINUXFACTORY_H
