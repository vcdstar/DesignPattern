#ifndef TEST_COMPOSITE_H__
#define TEST_COMPOSITE_H__

#include "CompositeClass.h"

class TestComposite
{
public:
    static void test()
    {
        CompositeClass c1_1(1, "1_1", "1");
        CompositeClass c2_1(2, "2_1", "2");
        CompositeClass c2_2(3, "2_2", "2");
        CompositeClass c3_1(4, "3_1", "3");
        CompositeClass c3_2(5, "3_2", "3");
        CompositeClass c3_3(6, "3_3", "3");
        CompositeClass c3_4(7, "3_4", "3");

        c1_1.Add(&c2_1);
        c1_1.Add(&c2_2);

        c2_1.Add(&c3_1);
        c2_1.Add(&c3_2);

        c2_2.Add(&c3_3);
        c2_2.Add(&c3_4);

        printf("data:%d, name:%s, group:%s\n", c1_1.iData, c1_1.name.c_str(), c1_1.group.c_str());
        scan(c1_1.Get());
    }
    static void scan(list<CompositeClass*>* list_)
    {
        auto it = list_->begin();
        while (it != list_->end())
        {
            printf("data:%d, name:%s, group:%s\n", (*it)->iData, (*it)->name.c_str(), (*it)->group.c_str());
            scan((*it)->Get());
            it++;
        }
    }
};

#endif