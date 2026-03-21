#include <iostream>

class Human{

    public: // public access modifier

        // Properties / Attributes 
        std::string name;
        std::string occupation;
        int age;

        // Methods / action
        void eat(){
            std::cout << "This person is eating !!"<< '\n';
        }
        void drink(){
            std::cout << "This person is drinking !!"<< '\n';
        }
        void walk(){
            std::cout << "This person is walking !!"<< '\n';
        }
};


int main(){

    // Human Number 1
    Human human1;

    human1.name = "Rohan";
    human1.occupation = "Emgineer";
    human1.age = 25;
    
    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.walk();

    // Human number 2
    Human human2;

    human2.name = "Das";
    human2.occupation = "Mechanic";
    human2.age = 15;
    
    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.walk();


    return 0;
}