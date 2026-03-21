#include<iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};


 // Pass by value (PV)
void printCarPV(Car car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.model << '\n';
}

// Pass by Reference (PR)
void printCarPR(Car &car){
    std::cout << &car << '\n';
   std::cout << car.model << '\n';
   std::cout << car.year << '\n';
   std::cout << car.model << '\n';
}

int main (){

    Car car1;
    Car car2;

    car1.model = "BMW";
    car1.year = 2024 ;
    car1.color = "red";

    car2.model = "Tata";
    car2.year = 2026 ;
    car2.color = "White";

    std::cout << &car1 << '\n';
    printCarPV(car1);
    printCarPR(car1);

    std::cout << &car2 << '\n';
    printCarPV(car2);
    printCarPR(car2);


    return 0;
}