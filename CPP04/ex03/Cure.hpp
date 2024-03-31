#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    private:
        std::string type;
    public:
        Cure();
        ~Cure();
        Cure&   operator=(const Cure& other);
        Cure(Cure& ref);
        std::string const & getType() const;
        Cure* clone() const;
        void use(ICharacter& target);
};



#endif
