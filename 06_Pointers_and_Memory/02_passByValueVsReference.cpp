#include<iostream>
void swapV(std::string x,std::string y){

    // Pass by value - 
    std::string temp;
    temp = x; // Saves the copy 
    x = y;
    y = temp;

    std::cout << "X: " << &x <<'\n'; // At different memory address 
    std::cout << "Y: " << &y <<'\n';

}

void swapR(std::string &x,std::string &y){

    // Pass by Reference - 
    std::string temp;
    temp = x; // Exchange at the same address
    x = y;
    y = temp;

    std::cout << "X: " << &x <<'\n'; // At same memory address 
    std::cout << "Y: " << &y <<'\n';

}
int main(){

    std::string x = "Pratik";
    std::string y = "Das";

    
    std::cout << "X: " << x <<'\n';
    std::cout << "Y: " << y <<'\n';
    
    std::cout << "Original Address !!" <<'\n';
    std::cout << "X: " << &x <<'\n';
    std::cout << "Y: " << &y <<'\n';
    
    std::cout << "Copied at an Address !!" <<'\n';
    swapV(x,y);
    std::cout << "X: " << x <<'\n';
    std::cout << "Y: " << y <<'\n';
    
    std::cout << "Address on passing by Reference!!" <<'\n';
    swapR(x,y);
    std::cout << "X: " << x <<'\n';
    std::cout << "Y: " << y <<'\n';

    return 0;
}