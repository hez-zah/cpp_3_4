#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type):type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria& ref) : type(ref.type)
{
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::string name = target.getName();
    std::cout << "choise " << name << " Materia" << std::endl;
}
