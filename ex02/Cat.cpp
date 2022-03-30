#include <Cat.hpp>

#include <logutils.hpp>

Cat::Cat()
    : Animal("<cat>"), brain(new Brain())
{
    LOG_CTOR;
}

Cat::Cat(const Cat& that)
    : Animal(that.type), brain(new Brain(*that.brain))
{
    LOG_COPY_CTOR;
}

Cat::~Cat()
{
    LOG_DTOR;
    delete brain;
}

void Cat::swap(Cat& that)
{
    LOG_METHOD;
    Animal::swap(that);
    brain->swap(*that.brain);
}

Cat& Cat::operator=(Cat that)
{
    LOG_COPY_ASGN;
    swap(that);
    return *this;
}

void Cat::makeSound() const
{
    LOG_METHOD_A("Meow!");
}
