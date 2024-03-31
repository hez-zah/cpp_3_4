#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* Dog_br;
    public:
        Dog();
        ~Dog();
        Dog(Dog& other);
        void    makeSound() const;
        std::string getType() const;
        void    affich_Brain_add(Dog& tmp);
};


#endif
