#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(Brain& other);
        void set_ideas(std::string str);
        std::string *get_ideas();
        Brain();
        ~Brain();
};



#endif
