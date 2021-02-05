#ifndef MAIN_H__
#define MAIN_H__

#include "FactoryPattern/TestFactory.h"
#include "AdapterPattern/TestAdapter.h"
#include "BridgePattern/TestBridge.h"
#include "CompositePattern/TestComposite.h"
#include "DecoratorPattern/TestDecorator.h"
#include "FacadePattern/TestFacade.h"
#include "DataChainPattern/TestDataChain.h"
#include "ObserverPattern/TestObserver.h"
#include "StatePattern/TestState.h"
#include <stdio.h>

using namespace std;

int main()
{
    TestFactory::test();
    printf("----------------------------------------\n");
    TestAdapter::test();
    printf("----------------------------------------\n");
    TestBridge::test();
    printf("----------------------------------------\n");
    TestComposite::test();
    printf("----------------------------------------\n");
    TestDecorator::test();
    printf("----------------------------------------\n");
    TestFacade::test();
    printf("----------------------------------------\n");
    TestDataChain::test();
    printf("----------------------------------------\n");
    TestObserver::test();
    printf("----------------------------------------\n");
    TestState::test();
    printf("----------------------------------------\n");

    return 0;
}

#endif