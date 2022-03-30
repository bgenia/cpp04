#include <Dog.hpp>

#include <logutils.hpp>

Dog::Dog()
    : Animal("<dog>"), brain(new Brain())
{
    LOG_CTOR;
}

Dog::Dog(const Dog& that)
    : Animal(that.type), brain(new Brain(*that.brain))
{
    LOG_COPY_CTOR;
}

Dog::~Dog()
{
    LOG_DTOR;
    delete brain;
}

void Dog::swap(Dog& that)
{
    LOG_METHOD;
    Animal::swap(that);
    brain->swap(*that.brain);
}

Dog& Dog::operator=(Dog that)
{
    LOG_COPY_ASGN;
    swap(that);
    return *this;
}

void Dog::makeSound() const
{
    LOG_METHOD_A("Bark!");
}
