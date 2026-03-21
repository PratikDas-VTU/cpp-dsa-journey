#include<iostream>
int main (){

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std :: string name = "Pratik";
    int age = 20;
    bool student = true;

    // Hexa-decimal Values
    
    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}