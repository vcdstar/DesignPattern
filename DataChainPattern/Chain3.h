#ifndef CHAIN_3_H__
#define CHAIN_3_H__

#include "ChainBase.h"

class Chain3 : public ChainBase
{
protected:
    virtual void Process(string data)
    {
        printf("3 chain process data : %s\n", data.c_str());
    }
};

#endif