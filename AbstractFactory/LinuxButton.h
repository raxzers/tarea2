//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_LINUXBUTTON_H
#define ABSTRACTFACTORY_LINUXBUTTON_H

#include <iostream>
#include "Widget.h"

class LinuxButton : public Widget {
public:
    void draw() { std::cout << "LinuxButton\n"; }
};


#endif //ABSTRACTFACTORY_LINUXBUTTON_H
