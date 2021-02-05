#ifndef STATE_BASE_H__
#define STATE_BASE_H__

#include <stdio.h>
#include <string>

using namespace std;

class StateBase
{
public:
    string stateName;
    virtual void excute(string data) {}
};

#endif