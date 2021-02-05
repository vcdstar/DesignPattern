#ifndef TEST_ADAPTER_H__
#define TEST_ADAPTER_H__

#include "Adapter1.h"
#include "Adapter2.h"
#include "UseAdapter.h"

class TestAdapter
{
public:
    static void test()
    {
        UseAdapter ua;
        ua.func("data 1");

        BaseAdapter *a1 = new Adapter1();
        BaseAdapter *a2 = new Adapter2();

        ua.setAdapter(a1);
        ua.func("data 2");
        ua.setAdapter(a2);
        ua.func("data 3");
        // delete a2
        ua.setAdapter(nullptr);
    }
};

#endif