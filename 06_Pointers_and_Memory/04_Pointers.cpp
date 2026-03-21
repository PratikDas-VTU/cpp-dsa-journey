#include<iostream>

int main(){

    // pointers = variable that stores a memory address of another variable
    //sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Pratik";
    int age = 20;
    std::string array[4] = {"Element1","Element2","Element3","Element4",};

    std::string *pName = &name;
    int *pAge = &age ;
    std::string *pArray = array;

    std::cout << pName << '\n'; // Accessing the address
    std::cout << *pName << '\n'; // Accessing the Value
    
    std::cout << pAge << '\n'; // Accessing the address
    std::cout << *pAge << '\n'; // Accessing the Value

    std::cout << pArray << '\n';
    std::cout << *pArray << '\n'; // Access first element

    return 0;
}