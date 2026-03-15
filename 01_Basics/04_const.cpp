#include<iostream>
int main(){
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    // Example 1
    const double PI = 3.24259; // makes pi value Constant
    double radius = 5;
    double circumference = 2*PI*radius;

    std::cout << "Circumference = " << circumference << "cm";

    // Example 2
    const int SPEED = 299792458;
    std::cout << '\n' << "The speed of light is " << SPEED << "m/s";


    return 0;
}