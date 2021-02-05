#ifndef DECORATOR_ORIGINAL_CLASS_2_H__
#define DECORATOR_ORIGINAL_CLASS_2_H__

#include "DecoratorOriginalBase.h"

class DecoratorOriginalClass2 : public DecoratorOriginalBase
{
public:
    virtual void func()
    {
        printf("original class 2 exec\n");
    }
};

#endif