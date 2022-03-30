#pragma once

#include <string>

class Brain
{
public:
    Brain();
    Brain(const Brain& that);

    virtual ~Brain();

    void swap(Brain& that);

    Brain& operator=(Brain that);

private:
    const static std::size_t IDEA_COUNT = 100;

    std::string ideas[IDEA_COUNT];
};
