#pragma once

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& that);

    virtual ~Dog();

    void swap(Dog& that);

    Dog& operator=(Dog that);

    virtual void makeSound() const;

private:
    Brain* brain;
};
