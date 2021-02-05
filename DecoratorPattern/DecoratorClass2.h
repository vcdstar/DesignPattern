#ifndef DECORATOR_CLASS_2_H__
#define DECORATOR_CLASS_2_H__

#include "DecoratorBase.h"

class DecoratorClass2 : public DecoratorBase
{
public:
    virtual void DecoratorFunc()
    {
        printf("expend func 2 exec \n");
    }
    virtual void func()
    {
        DecoratorFunc();
        if (dob != nullptr)
            dob->func();
    }
};

#endif