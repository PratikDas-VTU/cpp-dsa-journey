#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    while(name.empty()) {
        std::cout << "Name cannot be empty. Please enter again: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}