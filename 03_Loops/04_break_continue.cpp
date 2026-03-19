#include <iostream>

int main() {

    // BREAK example
    std::cout << "Break Example: ";
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            break;  // stops loop completely
        }
        std::cout << i << " ";
    }

    std::cout << std::endl;

    // CONTINUE example
    std::cout << "Continue Example: ";
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            continue;  // skips this iteration
        }
        std::cout << i << " ";
    }

    return 0;
}