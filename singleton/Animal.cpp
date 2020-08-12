#include "Animal.h"
#include <iostream>>

void Animal::Cry(void)
{
	std::cout << typeid(*this).name() <<" cry..." << std::endl;
}
