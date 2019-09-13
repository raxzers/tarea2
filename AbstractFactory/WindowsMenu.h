//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_WINDOWSMENU_H
#define ABSTRACTFACTORY_WINDOWSMENU_H


#include <iostream>
#include "Widget.h"

class WindowsMenu : public Widget {
public:
    void draw() { std::cout << "WindowsMenu\n"; }
};


#endif //ABSTRACTFACTORY_WINDOWSMENU_H
