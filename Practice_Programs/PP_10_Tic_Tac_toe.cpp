#include<iostream>
#include<cstdlib>
#include<ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    srand(time(0));

    drawBoard(spaces);

    while(running){

        playerMove(spaces, player);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }

    std::cout << "Game Over!\n";

    return 0;
}

// 🎮 Draw Board
void drawBoard(char *spaces){
    std::cout << "\n";
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << "\n";
    std::cout << "\n";
}

// 👤 Player Move
void playerMove(char *spaces, char player){
    int number;

    do{
        std::cout << "Enter a position (1-9): ";
        std::cin >> number;
        number--;

        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 8 || !number < 0);
}

// 🤖 Computer Move
void computerMove(char *spaces, char computer){
    int number;

    do{
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }while(true);
}

// 🏆 Check Winner
bool checkWinner(char *spaces, char player, char computer){

    int winCombos[8][3] = {
        {0,1,2},{3,4,5},{6,7,8}, // rows
        {0,3,6},{1,4,7},{2,5,8}, // cols
        {0,4,8},{2,4,6}          // diagonals
    };

    for(int i = 0; i < 8; i++){
        if(spaces[winCombos[i][0]] != ' ' &&
           spaces[winCombos[i][0]] == spaces[winCombos[i][1]] &&
           spaces[winCombos[i][1]] == spaces[winCombos[i][2]]){

            if(spaces[winCombos[i][0]] == player){
                std::cout << "YOU WIN!\n";
            } else{
                std::cout << "YOU LOSE!\n";
            }
            return true;
        }
    }
    return false;
}

// 🤝 Check Tie
bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It's a tie!\n";
    return true;
}