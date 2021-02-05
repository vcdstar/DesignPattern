#ifndef USE_ADAPTER_H__
#define USE_ADAPTER_H__

#include "BaseAdapter.h"

class UseAdapter
{
private:
    BaseAdapter *baseAdapter;
public:
    UseAdapter()
    {
        baseAdapter = nullptr;
    }
    void setAdapter(BaseAdapter* adapter_)
    {
        if (baseAdapter != nullptr)
        {
            delete baseAdapter;
            baseAdapter = nullptr;
        }
        baseAdapter = adapter_;
    }
    void func(string data)
    {
        printf("adapter base use \n");
        if (baseAdapter != nullptr) {
            baseAdapter->interface_func(data);
        }
    }
};

#endif