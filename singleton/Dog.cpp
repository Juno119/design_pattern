#include "Dog.h"

void Dog::Cry(void)
{
	std::cout << typeid(*this).name() << " bark..." << std::endl;
}

long long Dog::Func(int n)
{
	long long ret = 1;
	while (true) {
		ret = 1;
		for (int i = 1; i <= n; i++)
			ret *= i;
	}
	return ret;
}