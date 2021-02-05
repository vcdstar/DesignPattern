#ifndef BRIDGE_TYPE_2_1_H__
#define BRIDGE_TYPE_2_1_H__

#include <stdio.h>
#include "BridgeBaseType_2.h"

class BridgeType_2_1 : public BridgeBaseType2
{
public:
    virtual void Type_2_Func()
    {
        printf("type 2, class 1 func \n");
    }
};

#endif