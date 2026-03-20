#include<iostream>
#include<cstdlib>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    std::srand(time(0)); // random seed

    player = getUserChoice();
    computer = getComputerChoice();

    std::cout << "Your choice: ";
    showChoice(player);

    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

// USER CHOICE
char getUserChoice(){

    char choice;

    do{
        std::cout << "***************\n";
        std::cout << "Rock-Paper-Scissors Game\n";
        std::cout << "r = rock\n";
        std::cout << "p = paper\n";
        std::cout << "s = scissors\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

    }while(choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

// COMPUTER CHOICE
char getComputerChoice(){

    int num = rand() % 3;

    switch(num){
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
    }

    return 'r'; // default
}

// SHOW CHOICE
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n"; break;
        case 'p': std::cout << "Paper\n"; break;
        case 's': std::cout << "Scissors\n"; break;
    }
}

// DECIDE WINNER
void chooseWinner(char player, char computer){

    if(player == computer){
        std::cout << "It's a DRAW!\n";
    }
    else if(
        (player == 'r' && computer == 's') ||
        (player == 'p' && computer == 'r') ||
        (player == 's' && computer == 'p')
    ){
        std::cout << "YOU WIN! 🎉\n";
    }
    else{
        std::cout << "YOU LOSE! 😢\n";
    }
}