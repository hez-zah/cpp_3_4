#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Called WrongCat Default Constractor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Called WrongCat Deconstractor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    this->type = other.type;
    std::cout << "Called WrongCat Assignment operator" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Fake Sound meow" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->type);
}
