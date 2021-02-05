#ifndef TEST_FACADE_H__
#define TEST_FACADE_H__

#include "FacadeMain.h"

class TestFacade
{
public:
    static void test()
    {
        FacadeMain fm;
        fm.func("1");
        fm.func("2");
    }
};


#endif