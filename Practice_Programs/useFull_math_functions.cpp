#include <iostream>
#include <cmath>   // Required for mathematical functions

int main(){

    double x = 3;
    double y = 5;
    double z = 4.23;

    // std::max(a, b)
    // Returns the larger value between two numbers
    std::cout << std::max(x, y) << '\n';

    // std::min(a, b)
    // Returns the smaller value between two numbers
    std::cout << std::min(x, y) << '\n';
    
    // std::pow(base, exponent)
    // Raises a number to the power of another number
    // Example: 5^3 = 125
    std::cout << std::pow(y, x) << '\n';
    
    // std::sqrt(number)
    // Returns the square root of a number
    // Example: sqrt(9) = 3
    std::cout << std::sqrt(9) << '\n';
    
    // std::abs(number)
    // Returns the absolute value (removes negative sign)
    // Example: abs(-6) = 6
    std::cout << std::abs(-6) << '\n';
    
    // std::round(number)
    // Rounds a decimal number to the nearest integer
    // Example: 4.23 -> 4 , 4.67 -> 5
    std::cout << std::round(z) << '\n';

    // std::ceil(number)
    // Always rounds UP to the nearest integer
    // Example: 4.23 -> 5
    std::cout << std::ceil(z) << '\n';

    // std::floor(number)
    // Always rounds DOWN to the nearest integer
    // Example: 4.23 -> 4
    std::cout << std::floor(z) << '\n';
    
    return 0;
} 