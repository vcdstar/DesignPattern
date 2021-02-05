#include "BaseFactory.h"


map<string, CreatrClass>* BaseFactory::m_map = nullptr;
mutex BaseFactory::mtx;