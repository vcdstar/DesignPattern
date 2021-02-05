#ifndef TEST_OBSERVER_H__
#define TEST_OBSERVER_H__

#include "ObserverBase.h"
#include "BeenObserver1.h"
#include "BeenObserver2.h"

class TestObserver
{
public:
    static void test()
    {
        ObserverBase ob;

        BeenObserver1 bo1;
        BeenObserver2 bo2;

        ob.boi = &bo1;
        ob.func("data11111");

        ob.boi = &bo2;
        ob.func("data22222");
    }
};

#endif