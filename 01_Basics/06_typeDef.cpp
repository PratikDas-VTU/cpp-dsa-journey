#include<iostream>

// typedef = reserved keyword used to create an additional name
//      (alias) for another data type.
//      New identifier for an existing type
//      Helps with readability and reduces typos
//      Use when there is a clear benefit
//      Replaced with 'using' (work better w/ templates)


typedef std::string text_t; 
// or 
// using text_t = std::string; // more compatable as template

int main(){

    text_t firstName = "Pratik";
    text_t lastName = "das";

    std::cout << firstName << '\n';
    std::cout << lastName << '\n';

    return 0;
}