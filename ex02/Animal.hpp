#pragma once

#include <string>

class Animal
{
public:
    Animal();
    Animal(const Animal& that);

    virtual ~Animal();

    void swap(Animal& that);

    virtual void makeSound() const = 0;

protected:
    Animal(const std::string& type);

    std::string type;

private:
    Animal& operator=(const Animal& that);
};
