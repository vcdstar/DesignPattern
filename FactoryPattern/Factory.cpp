#include "Factory1.h"
#include "Factory2.h"


bool Factory1::register___ = BaseFactory::Register("1", Factory1::create);
bool Factory2::register___ = BaseFactory::Register("2", Factory2::create);