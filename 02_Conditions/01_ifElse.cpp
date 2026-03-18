#include<iostream>

int main () {

    int age ;

    std::cout << "Enter you age : " ;
    std:: cin >> age ;

     if(age < 0 || age > 120){
        std::cout << "Enter a Valid age !!";
     } else if (age >= 18){
        std::cout << "You are an adult !!";
     } else {
        std::cout << "You are a minor";
     }



    return 0;
}