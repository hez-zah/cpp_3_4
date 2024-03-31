#include "Cat.hpp"
#include "Dog.hpp"

void leaks(){system("leaks Brain");}

void test_deepcopy()
{
    std::cout << "\n======test Deep copy=======" << std::endl;
    Cat c1;
    Cat c2(c1);
    Dog d1;
    Dog d2(d1);
    c2.affich_Brain_add(c1);
    std::cout << "\n--{{{{{{{{{}}}}}}}}}--\n" << std::endl;
    d2.affich_Brain_add(d1);
    std::cout << "\n======end test Deep copy=======" << std::endl;
}

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "\n=============" << std::endl;
    delete j;//should not create a leak
    delete i;
    test_deepcopy();
    const AAnimal *arr[4];
    int k = -1;
    while (++k < 4)
        k < 2 ? (arr[k] = new Dog()) : (arr[k] = new Cat());
    std::cout << "\n=============" << std::endl;
    k = -1;
    while (++k < 4)
        delete arr[k];
    return 0;
}
