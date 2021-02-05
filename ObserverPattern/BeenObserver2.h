#ifndef BEEN_OBSERVER_2_H__
#define BEEN_OBSERVER_2_H__

#include "BeenObserverInterface.h"

class BeenObserver2 : public BeenObserverInterface
{
public:
    virtual void beCall(string data)
    {
        printf("been observer 2 be call %s\n", data.c_str());
    }
};

#endif