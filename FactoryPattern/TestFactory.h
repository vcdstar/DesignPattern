#ifndef FACTORY_TEST_CLASS_H__
#define FACTORY_TEST_CLASS_H__

#include "Factory1.h"
#include "Factory2.h"

class TestFactory
{
public:
    static void test()
    {
        BaseFactoryClass *_1 = BaseFactory::create("1");
        BaseFactoryClass *_2 = BaseFactory::create("2");

        if (_1 != nullptr)
            _1->test();
        if (_2 != nullptr)
            _2->test();

        delete _1;
        delete _2;
    }
};

#endif