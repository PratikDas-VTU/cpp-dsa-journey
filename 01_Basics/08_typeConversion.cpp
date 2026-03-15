#include<iostream>

int main(){

    int x = 3.14; // Implicit Type conversion 
    std::cout << x << '\n'; // Output - 3 
    
    char y = 100; // Explicit Type conversion 
    std::cout << y << '\n'; // Output - d (ASCII value)

    int correct = 7;
    int questions = 10;

    // double score = (correct / questions) * 100 ; // 0%
    double score = (correct / (double) questions) * 100 ; // 70 %

    std::cout << score << " %";


    return 0;
}