#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Animal";
    std::cout << "Called WrongAnimal Default Constractor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Called WrongAnimal Deconstractor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    this->type = other.type;
    std::cout << "Called WrongAnimal Assignment operator" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Sound of the WrongAnimal by Type" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
