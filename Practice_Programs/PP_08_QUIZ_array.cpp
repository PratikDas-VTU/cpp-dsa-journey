#include<iostream>
#include<string>

int main(){

    std::string questions[] = {
        "1. What is the capital of India?",
        "2. Which language is used for web development?",
        "3. What does CPU stand for?",
        "4. Which company developed C++?"
    };

    std::string options[][4] = {
        {"A. Mumbai", "B. Delhi", "C. Chennai", "D. Kolkata"},
        {"A. Python", "B. Java", "C. HTML", "D. C++"},
        {"A. Central Process Unit", "B. Computer Personal Unit", "C. Central Processing Unit", "D. Control Processing Unit"},
        {"A. Microsoft", "B. Google", "C. Bjarne Stroustrup", "D. Apple"}
    };

    char answers[] = {'B', 'C', 'C', 'C'};
    int size = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "------------------------\n";
        std::cout << questions[i] << '\n';

        for(int j = 0; j < 4; j++){
            std::cout << options[i][j] << '\n';
        }

        std::cout << "Enter your answer (A/B/C/D): ";
        std::cin >> guess;

        // Convert to uppercase (optional improvement)
        guess = toupper(guess);

        if(guess == answers[i]){
            std::cout << "Correct!\n";
            score++;
        } else{
            std::cout << "Wrong! Correct answer: " << answers[i] << '\n';
        }
    }

    std::cout << "------------------------\n";
    std::cout << "Your final score: " << score << "/" << size << '\n';

    return 0;
}