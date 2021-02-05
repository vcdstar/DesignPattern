#ifndef ADAPTER_1_H__
#define ADAPTER_1_H__

#include "BaseAdapter.h"

class Adapter1 : public BaseAdapter
{
public:
    void interface_func(string data)
    {
        printf("adapter interface func 1, process data %s \n", data.c_str());
    }
};

#endif