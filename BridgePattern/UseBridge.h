#ifndef USE_BRIDGE_H__
#define USE_BRIDGE_H__

#include "BridgeBaseType_1.h"
#include "BridgeBaseType_2.h"

class UseBridge
{
public:
    BridgeBaseType1 *bst1;
    BridgeBaseType2 *bst2;
    UseBridge()
    {
        bst1 = nullptr;
        bst2 = nullptr;
    }
    void test()
    {
        printf("use bridge\n");
        if (bst1 != nullptr)
            bst1->Type_1_Func();
        if (bst2 != nullptr)
            bst2->Type_2_Func();
    }
};

#endif