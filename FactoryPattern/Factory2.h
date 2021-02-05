#ifndef FACTORY_2_H__
#define FACTORY_2_H__

#include "BaseFactory.h"

class Factory2 : public BaseFactoryClass
{
public:
    void test() {
        printf("test 2 factory \n");
    }
    static BaseFactoryClass* create() {
        return new Factory2();
    }
    static bool register___;
};

#endif