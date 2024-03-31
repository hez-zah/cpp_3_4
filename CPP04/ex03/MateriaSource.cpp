#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    int i = -1;
    while (++i)
        (this->inventory)[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    int i = -1;
    while (++i)
        if ((this->inventory)[i])
            delete ((this->inventory)[i]);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
    {
        delete m;
        return ;
    }
    int i = 0;
    while ((this->inventory)[i] != 0 && i < 4)
        i++;
    if (i >= 4)
    {
        delete m;
        return ;
    }
    (this->inventory)[i] = m;
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while ((this->inventory)[i] && i < 4 && (this->inventory)[i]->getType() != type)
        i++;
    if (i >= 4)
        return 0;
    AMateria* tmp = NULL;
    if (type == "ice")
        tmp = new Ice();
    else
        tmp = new Cure();
    return tmp;
}
