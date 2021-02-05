#ifndef OBSERVER_BASE_H__
#define OBSERVER_BASE_H__

#include "BeenObserverInterface.h"

class ObserverBase
{
public:
    // TODO: this should a list
    BeenObserverInterface *boi;

public:
    ObserverBase()
    {
        boi = nullptr;
    }

    virtual void func(string data)
    {
        printf("observer base execute %s\n", data.c_str());
        if (boi != nullptr)
            boi->beCall(data);
    }
};

#endif