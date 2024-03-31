#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->Dog_br = new Brain;
    std::cout << GREEN << "Called Dog Default Constractor" << RESET << std::endl;
}

Dog::~Dog()
{
    delete (this->Dog_br);
    std::cout << "Called Dog Deconstractor" << std::endl;
}

void    Dog::affich_Brain_add(Dog& other)
{
    std::cout << "My Brain   "  << " | " << " other Brain" << std::endl;
    std::cout << "___________" << "_|_" << "_____________" << std::endl;;
    std::cout << this->Dog_br << " | " << other.Dog_br << std::endl;
    std::cout << "___________" << "_|_" << "_____________" << std::endl;;
    (this->Dog_br)->set_ideas("Brain_copy");
    (other.Dog_br)->set_ideas("Brain_original");
    int i = -1;
    while (++i < 100)
    {
        std::cout << ((this->Dog_br)->get_ideas())[i] << "  | " << ((other.Dog_br)->get_ideas())[i] << std::endl;
        std::cout << "___________" << "_|_" << "_____________" << std::endl;;
    }
}

Dog::Dog(Dog& other)
{
    std::cout << "Deep Copy Dog" << std::endl;
    this->type = other.type;
    this->Dog_br = new Brain();
    *(this->Dog_br) = *(other.Dog_br);
}

void    Dog::makeSound() const
{
    std::cout << "Sound of the " << this->type << " is barking" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
