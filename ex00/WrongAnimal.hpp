#pragma once

#include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& that);

    virtual ~WrongAnimal();

    void swap(WrongAnimal& that);

    WrongAnimal& operator=(WrongAnimal that);

    void makeSound() const;

protected:
    WrongAnimal(const std::string& type);

    std::string type;
};
