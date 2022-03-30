#include <Dog.hpp>

#include <logutils.hpp>

Dog::Dog()
    : Animal("<dog>")
{
    LOG_CTOR_A(type);
}

Dog::Dog(const Dog& that)
    : Animal(that.type)
{
    LOG_COPY_CTOR_A(type);
}

Dog::~Dog()
{
    LOG_DTOR_A(type);
}

void Dog::makeSound() const
{
    LOG_METHOD_A("Bark!");
}
