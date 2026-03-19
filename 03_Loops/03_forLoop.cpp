#include <iostream>

int main() {

    // Increment loop
    std::cout << "Increment (1 to 5): ";
    for(int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    // Decrement loop
    std::cout << "Decrement (5 to 1): ";
    for(int i = 5; i >= 1; i--) {
        std::cout << i << " ";
    }

    return 0;
}