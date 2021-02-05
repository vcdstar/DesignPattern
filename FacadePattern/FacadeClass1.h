#ifndef FACADE_CLASS_1_H__
#define FACADE_CLASS_1_H__

#include "FacadeBaseClass.h"

class FacadeClass1 : public FacadeBaseClass
{
public:
    virtual void func()
    {
        printf("this facade class 1 func , exec complex func 1 \n");
    }
};

#endif