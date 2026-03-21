#include <iostream>

class Animal
{

public:
    bool isAlive = true;
    void eat()
    {
        std::cout << "This animal is Eating !" << '\n';
    }
};

class Dog : public Animal
{

public:
    void bark()
    {
        std::cout << "The dog bark's !!" << '\n';
    }
};

class Cat : public Animal
{
    public: void meow(){
        std::cout << "The Cat Moew's !!" << '\n';
    }
};

int main()
{

    Dog dog;
    Cat cat;

    std::cout << dog.isAlive << '\n';
    dog.eat();
    dog.bark();

    cat.meow();

    return 0;
}