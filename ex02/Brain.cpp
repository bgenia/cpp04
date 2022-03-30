#include <Brain.hpp>

#include <logutils.hpp>

Brain::Brain()
{
    LOG_CTOR;
}

Brain::Brain(const Brain& that)
{
    LOG_COPY_CTOR;
    for (std::size_t i = 0; i < IDEA_COUNT; i++)
        ideas[i] = that.ideas[i];
}

Brain::~Brain()
{
    LOG_DTOR;
}

void Brain::swap(Brain& that)
{
    LOG_METHOD;
    for (std::size_t i = 0; i < IDEA_COUNT; i++)
        ideas[i].swap(that.ideas[i]);
}

Brain& Brain::operator=(Brain that)
{
    LOG_COPY_ASGN;
    swap(that);
    return *this;
}
