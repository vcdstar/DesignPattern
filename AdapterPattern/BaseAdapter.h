#ifndef BASE_ADAPTER_H__
#define BASE_ADAPTER_H__

#include <stdio.h>
#include <string>

using namespace std;

class BaseAdapter
{
public:
    virtual void interface_func(string data) = 0;
};

#endif