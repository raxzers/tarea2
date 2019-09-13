//
// Created by conejo on 12/9/19.
//

#ifndef ABSTRACTFACTORY_CLIENT_H
#define ABSTRACTFACTORY_CLIENT_H


#include "Factory.h"

class Client {
private:
    Factory *factory;

public:
    Client(Factory *f) {
        factory = f;
    }

    void draw() {
        Widget *w = factory->create_button();
        w->draw();
        display_window_one();
        display_window_two();
    }

    void display_window_one() {
        Widget *w[] = {
                factory->create_button(),
                factory->create_menu()
        };
        w[0]->draw();
        w[1]->draw();
    }

    void display_window_two() {
        Widget *w[] = {
                factory->create_menu(),
                factory->create_button()
        };
        w[0]->draw();
        w[1]->draw();
    }
};


#endif //ABSTRACTFACTORY_CLIENT_H
