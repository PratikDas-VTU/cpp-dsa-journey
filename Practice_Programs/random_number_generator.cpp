#include<iostream>
#include<ctime>
int main(){

    // pseudo-random = NOT truly random ( but Close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // 1 - 6
    int num2 = (rand() % 20) + 1; // 1 - 20
    int num3 = (rand() % 100) + 1; // 1 - 100

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}