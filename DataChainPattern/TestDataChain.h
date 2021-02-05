#ifndef TEST_DATA_CHAIN_H__
#define TEST_DATA_CHAIN_H__

#include "Chain1.h"
#include "Chain2.h"
#include "Chain3.h"

class TestDataChain
{
public:
    static void test()
    {
        Chain3 head;
        Chain1 c1;
        Chain2 c2;
        Chain3 c3;

        head.SetChain(&c1);
        c1.SetChain(&c2);
        c2.SetChain(&c3);

        head.ProcessFunc("data11111");
        head.ProcessFunc("data22222");
        head.ProcessFunc("data33333");
        head.ProcessFunc("data44444");
    }    
};

#endif