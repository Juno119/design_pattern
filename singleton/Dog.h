#pragma once
#include "Singleton.h"
#include "Animal.h"

class Dog : public Singleton<Dog>,public Animal
{
    friend class Singleton<Dog>;
public:
    virtual void Cry(void);
    virtual long long Func(int n);
private:
    Dog() = default;
    virtual ~Dog() = default;
    Dog(const Dog&) = delete;
    Dog& operator =(const Dog&) = delete;
};



