#include <WrongCat.hpp>

#include <logutils.hpp>

WrongCat::WrongCat()
    : WrongAnimal("<wrong cat>")
{
    LOG_CTOR_A(type);
}

WrongCat::WrongCat(const WrongCat& that)
    : WrongAnimal(that.type)
{
    LOG_COPY_CTOR_A(type);
}

WrongCat::~WrongCat()
{
    LOG_DTOR_A(type);
}

void WrongCat::makeSound() const
{
    LOG_METHOD_A("АХААХХАХАХАХХАХАХАХХАХАХАХАХАХХАХАХАХАХАХААХАХАА!");
}
