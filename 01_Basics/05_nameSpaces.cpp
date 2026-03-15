#include<iostream>

namespace first{
    int x = 10;
}
namespace second{
    int x = 20;
}
int main(){

    // Namespace = provides a solution for preventing name conflicts
    //      in large projects. Each entity needs a unique name.
    //      A namespace allows for identically named entities
    //      as long as the namespaces are different.

    int x = 30;

    std::cout << x << '\n';
    // method 1
    std::cout << first::x << '\n'; // :: <- scope resolution operator
    std::cout << second::x << '\n';

    // Method 2 - (if x is not declared inside main function)
    using namespace first;
    std::cout << x ;

    return 0;
}