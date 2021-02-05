#ifndef DECORATOR_CLASS_1_H__
#define DECORATOR_CLASS_1_H__

#include "DecoratorBase.h"

class DecoratorClass1 : public DecoratorBase
{
public:
    virtual void DecoratorFunc()
    {
        printf("expend func 1 exec \n");
    }
    virtual void func()
    {
        DecoratorFunc();
        if (dob != nullptr)
            dob->func();
    }
};

#endif