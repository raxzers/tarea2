//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_WINDOWSBUTTON_H
#define ABSTRACTFACTORY_WINDOWSBUTTON_H


#include <iostream>
#include "Widget.h"

class WindowsButton : public Widget {
public:
    void draw() { std::cout << "WindowsButton\n"; }
};


#endif //ABSTRACTFACTORY_WINDOWSBUTTON_H
