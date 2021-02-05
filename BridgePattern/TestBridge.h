#ifndef TEST_BRIDGE_H__
#define TEST_BRIDGE_H__

#include "UseBridge.h"
#include "BridgeType_1_1.h"
#include "BridgeType_1_2.h"
#include "BridgeType_2_1.h"
#include "BridgeType_2_2.h"

class TestBridge
{
public:
    static void test()
    {
        UseBridge ub;
        BridgeBaseType1* bbt1_1 = new BridgeType_1_1();
        BridgeBaseType1* bbt1_2 = new BridgeType_1_2();
        BridgeBaseType2* bbt2_1 = new BridgeType_2_1();
        BridgeBaseType2* bbt2_2 = new BridgeType_2_2(); 

        ub.test();
        ub.bst1 = bbt1_1;
        ub.bst2 = bbt2_1;
        ub.test();
        ub.bst2 = bbt2_2;
        ub.test();
        ub.bst1 = bbt1_2;
        ub.test();
        ub.bst2 = bbt2_1;
        ub.test();

        delete bbt1_1;
        bbt1_1 = nullptr;
        delete bbt1_2;
        bbt1_2 = nullptr;
        delete bbt2_1;
        bbt2_1 = nullptr;
        delete bbt2_2;
        bbt2_2 = nullptr;
    }
};

#endif