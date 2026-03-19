#include <iostream>

int main() {
    int rows, cols;
    char symbol;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}