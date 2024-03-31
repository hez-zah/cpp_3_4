#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->Cat_br = new Brain;    
    std::cout << YELLOW << "Called Cat Default Constractor" << RESET << std::endl;
}

Cat::Cat(Cat& other)
{
    std::cout << "Deep Copy Cat" << std::endl;
    this->type = other.type;
    this->Cat_br = new Brain();
    *(this->Cat_br) = *(other.Cat_br);
}

Cat::~Cat()
{
    delete(this->Cat_br);
    std::cout << "Called Cat Deconstractor" << std::endl;
}

void    Cat::affich_Brain_add(Cat& other)
{
    std::cout << "My Brain   "  << " | " << " other Brain" << std::endl;
    std::cout << "___________" << "_|_" << "_____________" << std::endl;;
    std::cout << this->Cat_br << " | " << other.Cat_br << std::endl;
    std::cout << "___________" << "_|_" << "_____________" << std::endl;;
    (this->Cat_br)->set_ideas("Brain_copy");
    (other.Cat_br)->set_ideas("Brain_original");
    int i = -1;
    while (++i < 100)
    {
        std::cout << ((this->Cat_br)->get_ideas())[i] << "  | " << ((other.Cat_br)->get_ideas())[i] << std::endl;
        std::cout << "___________" << "_|_" << "_____________" << std::endl;;
    }
}

void    Cat::makeSound() const
{
    std::cout << "Sound of the " << this->type << " is meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
