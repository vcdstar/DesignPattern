#ifndef FACADE_MAIN_H__
#define FACADE_MAIN_H__

#include "FacadeClass1.h"
#include "FacadeClass2.h"
#include <map>
#include <string>

using namespace std;

class FacadeMain
{
public:
    FacadeMain()
    {
        m_map.insert(pair<string, FacadeBaseClass *>("1", new FacadeClass1()));
        m_map.insert(pair<string, FacadeBaseClass *>("2", new FacadeClass2()));
    }
    ~FacadeMain()
    {
        while (m_map.begin() != m_map.end())
        {
            auto it = m_map.begin();
            m_map.erase(it->first);
            FacadeBaseClass *fbc = it->second;
            delete fbc;
            fbc = nullptr;
        }
    }
    map<string, FacadeBaseClass *> m_map;
    void func(string type)
    {
        if (m_map.find(type) == m_map.end())
        {
            printf("not find %s \n", type.c_str());
            return;
        }
        printf("show easy func %s \n", type.c_str());
        m_map.find(type)->second->func();
    }
};

#endif