#include "Ice.hpp"
#include "IMateriaSource.hpp"

Ice::Ice():type("ice")
{
}

Ice::~Ice()
{
}

Ice&   Ice::operator=(const Ice& other)
{
    this->type = other.type;
    return (*this);
}

Ice::Ice(Ice& ref)
{
    this->type = ref.type;
}

std::string const & Ice::getType() const
{
    return (this->type);
}

Ice* Ice::clone() const
{
    Ice *I = new Ice();
    return (I);
}

void Ice::use(ICharacter& target)
{
    std::string name = target.getName();
    std::cout << "* shoots an ice bolt at " << name << std::endl;
    std::cout << "* heals " << name <<" ’s wounds *" << std::endl;
}
