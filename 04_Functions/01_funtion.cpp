#include<iostream>


void song(std::string name){

    std::cout << "Happy Birthday to You !" << '\n';
    std::cout << "Happy Birthday to You !" << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday , Happy Birthday , Happy Birthday to You !" << '\n';
}
int main(){

    std::string name ;
    
    std::cout << "Enter name: ";
    std::getline(std::cin, name) ;
    
    song(name);// call once with name

    return 0;
}