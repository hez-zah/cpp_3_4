#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* Cat_br;
    public:
        Cat();
        Cat(Cat& other);
        ~Cat();
        void    makeSound() const;
        std::string getType() const;
        void    affich_Brain_add(Cat& tmp);
};




#endif
