#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "Called AAnimal Default Constractor" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << RED << "Called AAnimal Deconstractor" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& ref)
{
    this->type = ref.type;
    std::cout << "Called AAnimal Copy" << std::endl;
}
