#include<iostream>
int main(){

    double temp;
    int choice;

    std::cout << "*********************************************"<< '\n';
    std::cout << "Welcome to Temperature Conversion Program !!"<< '\n';
    std::cout << "*********************************************"<< '\n';

    std::cout << " 1. Celcius to Fahrenheit" << '\n';
    std::cout << " 2. Fahrenheit to Celcius" << '\n';
    std::cout << " 3. Celsius to Kelvin" << '\n';
    std::cout << " 4. Kelvin to Celsius" << '\n';
    std::cout << " 5. Fahrenheit to Kelvin" << '\n';
    std::cout << " 6. Kelvin to Fahrenheit" << '\n';

    std::cout << "Select the Conversion You want to do : ";
    std::cin >> choice;

    switch(choice){

        case 1:
        case 3:
            std::cout << "Enter temperature in Celcius : ";
            std::cin >> temp;
            if(choice == 1){
                std::cout << "Given temperature in Fahrenheit is: " << (temp * (9.0/5.0)) + 32;
                break;
            } else {
                std::cout << "Given temperature in Kelvin is: " << (temp + 273.15);
                break;
            }
        case 2:
        case 5:
            std::cout << "Enter temperature in Fahrenheit : ";
            std::cin >> temp;
            if(choice == 2){
                std::cout << "Given temperature in Celcius is: " << (temp - 32) * (5.0/9.0);
                break;
            } else {
                std::cout << "Given temperature in Kelvin is: " << (temp - 32) * (5.0/9.0) + 273.15;
                break;
            }
        case 4:
        case 6:
            std::cout << "Enter temperature in Kelvin : ";
            std::cin >> temp;
            if(choice == 4){
                std::cout << "Given temperature in Celcius is: " << (temp - 273.15);
                break;
            } else {
                std::cout << "Given temperature in Fahrenheit is: " << (temp - 273.15) * (9.0/5.0) + 32;
                break;
            }
        default:
            std::cout << "Please enter number from 1 - 6 only !!";

    }

    return 0;
}