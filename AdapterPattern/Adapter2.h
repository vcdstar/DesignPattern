#ifndef ADAPTER_2_H__
#define ADAPTER_2_H__

#include "BaseAdapter.h"

class Adapter2 : public BaseAdapter
{
public:
    void interface_func(string data)
    {
        printf("adapter interface func 2, process data %s \n", data.c_str());
    }
};

#endif