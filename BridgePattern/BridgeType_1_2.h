#ifndef BRIDGE_TYPE_1_2_H__
#define BRIDGE_TYPE_1_2_H__

#include <stdio.h>
#include "BridgeBaseType_1.h"

class BridgeType_1_2 : public BridgeBaseType1
{
public:
    virtual void Type_1_Func()
    {
        printf("tyep 1, class 2 func \n");
    }
};
#endif