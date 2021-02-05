#ifndef FACTORY_1_H__
#define FACTORY_1_H__

#include "BaseFactory.h"

class Factory1 : public BaseFactoryClass
{
public:
    void test() {
        printf("test 1 factory \n");
    }
    static BaseFactoryClass* create() {
        return new Factory1();
    }
    static bool register___;
};

#endif