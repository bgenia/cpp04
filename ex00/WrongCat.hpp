#pragma once

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& that);

    ~WrongCat();

    void makeSound() const;
};
