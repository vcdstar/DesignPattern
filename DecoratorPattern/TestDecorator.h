#ifndef TEST_DECORATOR_H__
#define TEST_DECORATOR_H__

#include "DecoratorOriginalClass1.h"
#include "DecoratorOriginalClass2.h"
#include "DecoratorClass1.h"
#include "DecoratorClass2.h"

class TestDecorator
{
public:
    static void test()
    {
        DecoratorOriginalBase *dob1 = new DecoratorOriginalClass1();
        DecoratorOriginalBase *dob2 = new DecoratorOriginalClass2();

        DecoratorBase *db1 = new DecoratorClass1();
        DecoratorBase *db2 = new DecoratorClass2();

        db1->SetOriginalClass(dob1);
        db1->func();
        db1->SetOriginalClass(dob2);
        db1->func();

        db2->SetOriginalClass(dob1);
        db2->func();
        db2->SetOriginalClass(dob2);
        db2->func();

        delete db1;
        db1 = nullptr;
        delete db2;
        db2 = nullptr;
        delete dob1;
        dob1 = nullptr;
        delete dob2;
        dob2 = nullptr;
    }
};

#endif