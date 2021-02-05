#ifndef FACADE_CLASS_2_H__
#define FACADE_CLASS_2_H__

#include "FacadeBaseClass.h"

class FacadeClass2 : public FacadeBaseClass
{
public:
    virtual void func()
    {
        printf("this facade class 2 func , exec complex func 2 \n");
    }
};

#endif