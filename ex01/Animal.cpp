#include <Animal.hpp>

#include <logutils.hpp>

Animal::Animal()
    : type("<abstract animal>")
{
    LOG_CTOR;
}

Animal::Animal(const Animal& that)
    : type(that.type)
{
    LOG_COPY_CTOR;
}

Animal::~Animal()
{
    LOG_DTOR;
}

void Animal::swap(Animal& that)
{
    LOG_METHOD;
    type.swap(that.type);
}

Animal& Animal::operator=(Animal that)
{
    LOG_COPY_ASGN;
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
    LOG_CTOR;
}
