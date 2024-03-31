#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        void    makeSound() const;
        std::string getType() const;
        Dog& operator=(const Dog& other);
};


#endif
