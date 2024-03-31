#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Called Cat Default Constractor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Called Cat Deconstractor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    this->type = other.type;
    std::cout << "Called Cat Assignment operator" << std::endl;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Sound of the " << this->type << " is meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
