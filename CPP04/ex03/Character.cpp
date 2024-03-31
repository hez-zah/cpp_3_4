#include "Character.hpp"

Character::Character(std::string name):name(name)
{
    int i = -1;
    while (++i)
        (this->inventory)[i] = NULL;
}

Character::~Character()
{
    int i = -1;
    while (++i)
        if ((this->inventory)[i])
            delete ((this->inventory)[i]);
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    int i = 0;
    while ((this->inventory)[i] != 0 && i < 4)
        i++;
    if (i >= 4)
        return ;
    (this->inventory)[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    (this->inventory)[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    (this->inventory)[idx]->use(target);
}
