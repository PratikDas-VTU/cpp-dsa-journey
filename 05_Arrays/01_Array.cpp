#include<iostream>

int main(){

    // std::string fruits[3]; // Array declaration with size
    std::string fruits[] = {"Apple","Banana","Orange"}; // Declaration + assignment

    fruits[1] = "Grapes";

    std::cout << fruits[0] << '\n';
    std::cout << fruits[1] << '\n';
    std::cout << fruits[2] << '\n';


    return 0;
}