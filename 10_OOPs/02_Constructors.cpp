#include<iostream>

class Student{
    
    public:
        std::string name;
        int age;
        double gpa;

        // contructor
    Student(std::string x , int y , double z) // parameter can be Different
    {
        // if parameter different
        // this->name = name;
        // this->age = age;
        // this->gpa = gpa;

        // if parameter same 

        name = x;
        age = y;
        gpa = z;

    }
};

int main(){

    // argument for constructor
    Student student1("Das",25,5.6);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    
    Student student2("Pratik",45,9.6);

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';
    return 0;
}