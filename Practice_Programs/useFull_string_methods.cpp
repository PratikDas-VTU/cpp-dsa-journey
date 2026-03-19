#include<iostream>
int main(){

    std::string name ;

    std::cout << "Enter Your name: ";
    std::getline(std::cin,name) ;

    //name.clear() -> clears the string

    std::cout << "Length of your name is:" << name.length() << '\n';
    std::cout << "Checking whether the string is empty - " << name.empty() << '\n';
    std::cout << "Appending (gmail.com) - " << name.append("gmail.com") << '\n';
    std::cout << "Getting value by index - " << name.at(2) << '\n';
    std::cout << "Inserting value at an index - " << name.insert(2,"p") << '\n';
    std::cout << "Finding char - " << name.find("a") << '\n';
    std::cout << "Erasing values from starting index to end -1 - " << name.erase(1,4) << '\n';




    return 0;
}