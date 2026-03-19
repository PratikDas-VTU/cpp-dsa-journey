#include <iostream>

int main() {
    int num;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;

        if(num <= 0) {
            std::cout << "Invalid input! Please enter a positive number.\n";
        }

    } while(num <= 0);

    std::cout << "You entered: " << num << std::endl;

    return 0;
}