#include "Cure.hpp"
#include "IMateriaSource.hpp"

Cure::Cure():type("cure")
{
}

Cure::~Cure()
{
}

Cure&   Cure::operator=(const Cure& other)
{
    this->type = other.type;
    return (*this);
}

Cure::Cure(Cure& ref)
{
    this->type = ref.type;
}

std::string const & Cure::getType() const
{
    return (this->type);
}

Cure* Cure::clone() const
{
    Cure *I = new Cure();
    return (I);
}

void Cure::use(ICharacter& target)
{
    std::string name = target.getName();
    std::cout << "* shoots an Cure bolt at " << name << std::endl;
    std::cout << "* heals " << name <<" ’s wounds *" << std::endl;
}
