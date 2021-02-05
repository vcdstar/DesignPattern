#ifndef BRIDGE_TYPE_2_2_H__
#define BRIDGE_TYPE_2_2_H__

#include <stdio.h>
#include "BridgeBaseType_2.h"

class BridgeType_2_2 : public BridgeBaseType2
{
public:
    virtual void Type_2_Func()
    {
        printf("type 2, class 2 func \n");
    }
};

#endif