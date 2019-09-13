//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_LINUXMENU_H
#define ABSTRACTFACTORY_LINUXMENU_H


#include "Widget.h"
#include <iostream>
class LinuxMenu : public Widget {
public:
    void draw() { std::cout << "LinuxMenu\n"; }
};


#endif //ABSTRACTFACTORY_LINUXMENU_H
