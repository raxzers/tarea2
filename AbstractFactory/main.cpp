#include <iostream>
#include "Client.h"
#include "LinuxFactory.h"

#define LINUX

using namespace std;


int main() {
    Factory *factory;
#ifdef LINUX
    factory = new LinuxFactory;
#else // WINDOWS
    factory = new WindowsFactory;
#endif

    Client *c = new Client(factory);
    c->draw();
}
