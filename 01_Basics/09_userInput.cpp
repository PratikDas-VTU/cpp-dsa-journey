#include<iostream>

int main(){

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age ;

    std::cout << "What is your age ? : ";
    std::cin >> age; // additional \n cahracter 

    std::cout << "What is your full name ? : ";
    // std::cin >> name; // only input without white spaces

    std::getline(std::cin >> std::ws, name); // takes full entered string line as input

    // std::ws -> removes the \n white spaces as input from above age input


    std::cout << "Hello " << name << '\n' << "Welcome in C++ programming !!";
    std::cout << '\n' << "Your age is " << age;



    return 0;
}