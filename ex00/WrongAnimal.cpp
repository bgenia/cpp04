#include <WrongAnimal.hpp>

#include <logutils.hpp>

WrongAnimal::WrongAnimal()
    : type("<abstract wrong animal>")
{
    LOG_CTOR_A(type);
}

WrongAnimal::WrongAnimal(const WrongAnimal& that)
    : type(that.type)
{
    LOG_COPY_CTOR_A(type);
}

WrongAnimal::~WrongAnimal()
{
    LOG_DTOR_A(type);
}

void WrongAnimal::swap(WrongAnimal& that)
{
    type.swap(that.type);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal that)
{
    swap(that);
    return *this;
}

void WrongAnimal::makeSound() const
{
    LOG_METHOD_A("🗿🗿🗿🚬🚬🚬");
}

WrongAnimal::WrongAnimal(const std::string& type)
    : type(type)
{
    LOG_CTOR_A(type);
}
