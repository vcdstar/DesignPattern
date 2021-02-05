#ifndef CHAIN_BASE_H__
#define CHAIN_BASE_H__

#include <stdio.h>
#include <string>
#include <list>
#include <mutex>

using namespace std;

class ChainBase
{
protected:
    list<ChainBase*> m_list;
    mutex mtx;
public:
    virtual void ProcessFunc(string data)
    {
        Process(data);
        mtx.lock();
        auto it = m_list.begin();
        while (it != m_list.end())
        {
            (*it)->Process(data);
            (*it)->ProcessFunc(data);   
            it++;
        }
        mtx.unlock();
    }
    void SetChain(ChainBase* chain_)
    {
        mtx.lock();
        m_list.push_back(chain_);
        mtx.unlock();
    }
protected:
    virtual void Process(string data)
    {
        printf("base chain process data : %s\n", data.c_str());
    }
};

#endif