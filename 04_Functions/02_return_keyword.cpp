#include<iostream>

double sqaure(double length){
    return length * length;
}
double cube(double side){
    return side*side*side;
}
std::string fullName(std::string firstName , std::string lastName){

    return firstName + " " + lastName ;
}
int main(){

    double length = 5.0;
    double side = 3.0;
    std::string firstName = "Pratik";
    std::string lastName = "Das";

    double area = sqaure(length);
    double volume = cube(side);
    std::string name = fullName(firstName,lastName);

    std::cout << "Area: " << area << '\n';
    std::cout << "Volume: " << volume << '\n';
    std::cout << "FullName: " << name << '\n';
    return 0;
}