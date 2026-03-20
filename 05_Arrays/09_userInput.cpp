#include<iostream>

int main(){

    std::string cars[5];
    int size = sizeof(cars)/sizeof(cars[0]);
    std::string temp;

    for(int i = 0; i < size ; i++){
        std::cout << "Enter car number " << i + 1 << "(or q to quit): ";
        std::getline(std::cin, temp);

        if(temp=="q"){
            break;
        } else{
             cars[i]=temp;
        }

    }

    std::cout << "The cars you entered are :" << '\n';

    for(int i = 0 ; !cars[i].empty() ; i++){
        std::cout << cars[i] << '\n';
    }

}