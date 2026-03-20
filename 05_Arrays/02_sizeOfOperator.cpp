#include<iostream>

int main (){

    // sizeof() = determines the size in bytes of a:
    // variable, data type, class, objects, etc.

    int integer = 9;
    double decimal = 5.6;
    char character = 'A';
    std::string String = "Pratik das";
    bool boolean = true ;

    std::string Array[]= {"Arrays","bytes","elements"}; //Every element bytes add up
    char charArray[]= {'A','B'};

    std::cout << sizeof(integer) << " Bytes \n";
    std::cout << sizeof(decimal) << " Bytes \n";
    std::cout << sizeof(character) << " Bytes \n";
    std::cout << sizeof(String) << " Bytes \n";
    std::cout << sizeof(boolean) << " Bytes \n";
    std::cout << sizeof(Array) << " Bytes \n";
    std::cout << sizeof(charArray) << " Bytes \n";
    
    // We can find number of elements using sizeof() operator
    std::cout << sizeof(charArray)/sizeof(char) << " Elements \n";
    std::cout << sizeof(Array)/sizeof(std::string) << " Elements \n";
    


    return 0;
}