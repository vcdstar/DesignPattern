#ifndef BEEN_OBSERVER_INTERFACE_H__
#define BEEN_OBSERVER_INTERFACE_H__

#include <stdio.h>
#include <string>

using namespace std;

class BeenObserverInterface
{
public:
    virtual void beCall(string data) = 0;
};

#endif