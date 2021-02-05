#ifndef CHAIN_2_H__
#define CHAIN_2_H__

#include "ChainBase.h"

class Chain2 : public ChainBase
{
protected:
    virtual void Process(string data)
    {
        printf("2 chain process data : %s\n", data.c_str());
    }
};

#endif