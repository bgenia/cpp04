#pragma once

#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& that);

    virtual ~Cat();

    void swap(Cat& that);

    Cat& operator=(Cat that);

    virtual void makeSound() const;

private:
    Brain* brain;
};
