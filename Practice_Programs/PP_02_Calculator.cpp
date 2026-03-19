#include<iostream>

int main(){

    char op;
    double num1;
    double num2;

    std::cout<<"Select an operation(+,-,*,/): ";
    std::cin >> op;

    std::cout<<"Enter first number: ";
    std::cin >> num1;

    std::cout<<"Enter second Number: ";
    std::cin >> num2;

    switch(op){

        case '+':
            std::cout << "Addition of the two numbers are " << (num1 + num2);
            break;
        case '-':
            std::cout << "Subtraction of the two numbers are " << (num1 - num2);
            break;
        case '*':
            std::cout << "Multiplication of the two numbers are " << (num1 * num2);
            break;
        case '/':
            if(num2 == 0){
                std::cout << "Second number cannot be Zero (0) !!";
                break;
            } else {
                std::cout << "Division of the two numbers are " << (num1 / num2);
            break;
            }
        default:
            std::cout << "Select an valid Operator !!";
    }

    return 0;
}