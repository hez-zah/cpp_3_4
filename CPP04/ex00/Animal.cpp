#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Called Animal Default Constractor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Called Animal Deconstractor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    std::cout << "Called Animal Assignment operator" << std::endl;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Sound of the Animal by Type" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
