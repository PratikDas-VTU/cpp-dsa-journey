#include<iostream>
 // Example 1
void walk(int step){
    if(step > 0){
        std::cout << "Walk And Walk !!" << '\n';
        walk(step - 1);
    }
}
 // Example 2
int factorial(int num){
    int total = 1;
    if(num > 1){
        total = num * factorial(num - 1);
    }
    return total;
}
int main ( ){

   // recursion = a programming technique where a function invokes itself from within break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //    useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //    slower

    walk(50);

    int Factorial = factorial(6);
    std::cout << "Factorial : " << Factorial ;

    return 0;
}