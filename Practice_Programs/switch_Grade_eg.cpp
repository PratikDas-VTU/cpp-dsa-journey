#include<iostream>
int main(){

    char grade;
    std::cout << "Enter your Grade (S/A/B/C/D/F): ";
    std::cin >> grade;

    switch(grade){

        case 'S':
            std::cout << "Wow! ,  Excellent";
            break;
        case 'A':
            std::cout << "Great ! Very Good";
            break;
        case 'B':
            std::cout << "Good! But you can Improve";
            break;
        case 'C':
            std::cout << "You need to Study more !!";
            break;
        case 'D':
            std::cout << "Bro please Study ";
            break;
        case 'F':
            std::cout << "Ohh no , You failed";
            break;
        default:
            std::cout << "Please enter a Valid Grade !!";
    }



    return 0;
}