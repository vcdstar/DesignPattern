#ifndef STATE_CLASS_1_H__
#define STATE_CLASS_1_H__

#include "StateBase.h"

class StateClass1 : public StateBase
{
public:
    StateClass1()
    {
        stateName = "1";
    }
    virtual void excute(string data)
    {
        printf("state 1 class func excute : %s\n", data.c_str());
    }
};

#endif