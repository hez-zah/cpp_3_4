#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
    private:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        void    makeSound() const;
        std::string getType() const;
        WrongAnimal& operator=(const WrongAnimal& other);
};



#endif
