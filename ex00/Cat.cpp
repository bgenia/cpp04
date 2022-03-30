#include <Cat.hpp>

#include <logutils.hpp>

Cat::Cat()
    : Animal("<cat>")
{
    LOG_CTOR_A(type);
}

Cat::Cat(const Cat& that)
    : Animal(that.type)
{
    LOG_COPY_CTOR_A(type);
}

Cat::~Cat()
{
    LOG_DTOR_A(type);
}

void Cat::makeSound() const
{
    LOG_METHOD_A("Meow!");
}
