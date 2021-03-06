#pragma once

#include <string>

class Animal
{
public:
    Animal();
    Animal(const Animal& that);

    virtual ~Animal();

    void swap(Animal& that);

    Animal& operator=(Animal that);

    virtual void makeSound() const;

protected:
    Animal(const std::string& type);

    std::string type;
};
