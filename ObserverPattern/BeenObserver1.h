#ifndef BEEN_OBSERVER_1_H__
#define BEEN_OBSERVER_1_H__

#include "BeenObserverInterface.h"

class BeenObserver1 : public BeenObserverInterface
{
public:
    virtual void beCall(string data)
    {
        printf("been observer 1 be call %s\n", data.c_str());
    }
};

#endif