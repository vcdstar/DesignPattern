#ifndef COMPOSITE_CLASS_H__
#define COMPOSITE_CLASS_H__

#include <string>
#include <list>
#include <stdio.h>

using namespace std;

class CompositeClass
{
public:
    CompositeClass(){};
    CompositeClass(int data, string name_, string group_)
    {
        iData = data;
        name = name_;
        group = group_;
    }
    int iData;
    string name;
    string group;
    list<CompositeClass *> m_list;

    void Add(CompositeClass *cc)
    {
        m_list.push_back(cc);
    }

    list<CompositeClass *> *Get()
    {
        return &m_list;
    }
};

#endif