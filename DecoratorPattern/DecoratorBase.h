#ifndef DECORATOR_BASE_H__
#define DECORATOR_BASE_H__

#include "DecoratorOriginalBase.h"

class DecoratorBase
{
public:
    DecoratorOriginalBase *dob;

    DecoratorBase()
    {
        dob = nullptr;
    }
    void SetOriginalClass(DecoratorOriginalBase *dob_)
    {
        dob = dob_;
    }
    virtual void DecoratorFunc() {}
    virtual void func() {}
};

#endif