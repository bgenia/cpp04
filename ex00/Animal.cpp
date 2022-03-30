#include <Animal.hpp>

#include <logutils.hpp>

Animal::Animal()
    : type("<abstract animal>")
{
    LOG_CTOR_A(type);
}

Animal::Animal(const Animal& that)
    : type(that.type)
{
    LOG_COPY_CTOR_A(type);
}

Animal::~Animal()
{
    LOG_DTOR_A(type);
}

void Animal::swap(Animal& that)
{
    type.swap(that.type);
}

Animal& Animal::operator=(Animal that)
{
    swap(that);
    return *this;
}

void Animal::makeSound() const
{
    LOG_METHOD_A("Bruh!");
}

Animal::Animal(const std::string& type)
    : type(type)
{
    LOG_CTOR_A(type);
}
