#include<iostream>
#include<ctime>
int main(){

    srand(time(0));

    int random = rand () %5 + 1;

    switch(random){

        case 1 : std::cout << "You win a bumper sticker ! ";
            break;
        case 2 : std::cout << "You win a PS5 ";
            break;
        case 3 : std::cout << "You win a tshirt ";
            break;
        case 4 : std::cout << "You win a keyboard";
            break;
        case 5 : std::cout << "You win a mouse";
            break;
    }


    return 0;
}