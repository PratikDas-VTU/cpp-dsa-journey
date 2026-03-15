#include<iostream>
int main(){

    // integer data type ( whole Number)
    int age = 20; // output displayed
    int year = 2026;// output displayed
    int days = 7.5; // output truncated  (Only whole number displayed)

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';

    // double data type ( decimal number )
    double price = 10.45;
    double gpa = 9.5;
    double temp = 35.67;

    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temp << '\n';

    // char data type ( Single character )
    char grade = 'S';
    char symbol = '&';

    std::cout << grade << '\n';
    std::cout << symbol << '\n';

    // boolean ( true or false )
    bool isPass = false;
    bool online = true;

    std::cout << isPass << '\n';
    std::cout << online << '\n';

    // string (objects that represents a sequence of text)
    std::string name = "Pratik Das";
    std::string subject = "C++";

    std::cout << name << '\n';
    std::cout << subject << '\n';

    // String literal 
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old ";

    return 0;
}