#include <iostream>
#include <string>

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
    {
        const Animal& a = Animal();
        const Animal& b = Cat();
        const Animal& c = Dog();

        a.makeSound();
        b.makeSound();
        c.makeSound();
    }

    {
        const WrongAnimal& a = WrongAnimal();
        const WrongAnimal& b = WrongCat();

        a.makeSound();
        b.makeSound();
    }
}
