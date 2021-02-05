#ifndef DECORATOR_ORIGINAL_CLASS_1_H__
#define DECORATOR_ORIGINAL_CLASS_1_H__

#include "DecoratorOriginalBase.h"

class DecoratorOriginalClass1 : public DecoratorOriginalBase
{
public:
    virtual void func()
    {
        printf("original class 1 exec\n");
    }
};

#endif