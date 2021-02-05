#ifndef TEST_STATE_H__
#define TEST_STATE_H__

#include "StateContext.h"
#include "StateClass1.h"
#include "StateClass2.h"

class TestState
{
public:
    static void test()
    {
        StateContext sc;

        StateClass1 sc1;
        StateClass2 sc2;

        sc.ChangeState(&sc1);
        printf("%s\n",sc.GetState().c_str());
        sc.excute("data111");

        sc.ChangeState(&sc2);
        printf("%s\n",sc.GetState().c_str());
        sc.excute("data222");
    }
};

#endif