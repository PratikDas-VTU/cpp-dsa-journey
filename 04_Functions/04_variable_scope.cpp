#include<iostream>

int num = 3; // Global variable

void numPrint(){
    int num = 2; // Local to numPrint Function
    std::cout << num << '\n';
}
int main(){

    int num = 1; // Local to main Function
    std::cout << num << '\n';
    
    numPrint(); 
    
    std::cout << ::num << '\n'; // Fior global variable use ""::""
    
    return 0;
}

