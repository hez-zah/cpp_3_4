#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Called Animal Default Constractor" << std::endl;
}

Animal::~Animal()
{
    std::cout << RED << "Called Animal Deconstractor" << RESET << std::endl;
}

Animal::Animal(const Animal& ref)
{
    this->type = ref.type;
    std::cout << "Called Animal Copy" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Sound of the Animal by Type" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
