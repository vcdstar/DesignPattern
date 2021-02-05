#ifndef BRIDGE_TYPE_1_1_H__
#define BRIDGE_TYPE_1_1_H__

#include <stdio.h>
#include "BridgeBaseType_1.h"

class BridgeType_1_1 : public BridgeBaseType1
{
public:
    virtual void Type_1_Func()
    {
        printf("tyep 1, class 1 func \n");
    }
};
#endif