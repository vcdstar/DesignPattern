#ifndef CHAIN_1_H__
#define CHAIN_1_H__

#include "ChainBase.h"

class Chain1 : public ChainBase
{
protected:
    virtual void Process(string data)
    {
        printf("1 chain process data : %s\n", data.c_str());
    }
};

#endif