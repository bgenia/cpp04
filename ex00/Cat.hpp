#pragma once

#include <Animal.hpp>

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& that);

    ~Cat();

    virtual void makeSound() const;
};
