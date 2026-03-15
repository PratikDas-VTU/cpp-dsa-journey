#include<iostream>
#include<cmath>
int main(){

    double height ;
    double base ;
    double hypotenuse ;

    std::cout << "Enter the HEIGHT of the triangle: ";
    std::cin >> height;

    std::cout << "Enter the BASE of the triangle: ";
    std::cin >> base;

    hypotenuse = std::sqrt(height*height + base*base);

    std::cout << "The length of the HYPOTENUSE with base " << base << " and height " << height << " is : " << hypotenuse;
    return 0;
}