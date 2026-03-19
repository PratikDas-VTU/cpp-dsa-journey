#include <iostream>

int main()
{

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    // Example 1
    int grade = 50;
    grade >= 60 ? std::cout<<"You Passed" : std::cout<<"You failed" << '\n';

    // Example 2
    int num = 5;
    num % 2 ==0 ? std::cout << "Even" :std::cout << "Odd"  << '\n';

    // Boolean example 

    bool hungry = false;

    std::cout << (hungry ? "you are hungry":"You are Full");

    return 0;
}