#pragma once

#include <Animal.hpp>

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& that);

    ~Dog();

    virtual void makeSound() const;
};
