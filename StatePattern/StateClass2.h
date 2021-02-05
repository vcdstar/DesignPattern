#ifndef STATE_CLASS_2_H__
#define STATE_CLASS_2_H__

#include "StateBase.h"

class StateClass2 : public StateBase
{
public:
    StateClass2()
    {
        stateName = "2";
    }
    virtual void excute(string data)
    {
        printf("state 2 class func excute : %s\n", data.c_str());
    }
};

#endif