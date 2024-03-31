#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void leaks(){system("leaks Poly");}

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    const WrongAnimal* delta = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    std::cout << std::endl;

    k->makeSound(); //will output the WrongAnimal sound!
    delta->makeSound();

    std::cout << std::endl;
    delete delta;
    delete k;
    delete i;
    delete j;
    delete meta;

    return 0;
}
