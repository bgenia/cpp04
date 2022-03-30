#include <iostream>
#include <string>

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
    {
        std::cout << "Subject test:" << std::endl;

        std::size_t animal_count;

        std::cin >> animal_count;

        Animal** animals = new Animal*[animal_count];

        std::cout << "[Allocation]" << std::endl;

        for (std::size_t i = 0; i < animal_count; i++)
        {
            if (i % 2 == 0)
                animals[i] = new Cat();
            else
                animals[i] = new Dog();

            animals[i]->makeSound();
        }

        std::cout << "[Deletion]" << std::endl;

        for (std::size_t i = 0; i < animal_count; i++)
        {
            delete animals[i];
        }
        delete[] animals;
    }

    {
        std::cout << "Assignment test:" << std::endl;

        std::cout << "[Creation]" << std::endl;

        Cat a = Cat();
        Cat b = Cat();

        std::cout << "[Assignment]" << std::endl;

        a = b;

        std::cout << "[Destructuring]" << std::endl;
    }
}
