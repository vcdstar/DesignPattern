#ifndef BASE_FACTORY_H__
#define BASE_FACTORY_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <thread>
#include <mutex>

using namespace std;

class BaseFactoryClass 
{
public:
    virtual void test() {
        printf("this base factory\n");
    }
};

typedef BaseFactoryClass* (*CreatrClass)();


class BaseFactory
{
public:
    static map<string, CreatrClass> *m_map;
    static mutex mtx;
    static bool Register(string name, CreatrClass func) {
        mtx.lock();
        if (m_map == nullptr)
            m_map = new map<string, CreatrClass>();
        m_map->insert(pair<string, CreatrClass>(name, func));
        mtx.unlock();
        return true;
    }
    static BaseFactoryClass* create(string name) {
        BaseFactoryClass* c = nullptr;
        mtx.lock();
        if (m_map->find(name) != m_map->end()) {
            CreatrClass p = m_map->find(name)->second;
            c = p();
        }
        mtx.unlock();
        return c;
    }
};


#endif