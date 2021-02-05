#ifndef STATE_CONTEXT_H__
#define STATE_CONTEXT_H__

#include "StateBase.h"

class StateContext
{
public:
    StateBase *sb;
    StateContext()
    {
        sb = nullptr;
    }
    string GetState()
    {
        if (sb != nullptr)
            return string("this state is : ") + sb->stateName;
        else
            return "state is none";
    }

    void excute(string data)
    {
        if (sb != nullptr)
        {
            sb->excute(data);
        }
    }

    void ChangeState(StateBase *sb_)
    {
        sb = sb_;
    }
};

#endif