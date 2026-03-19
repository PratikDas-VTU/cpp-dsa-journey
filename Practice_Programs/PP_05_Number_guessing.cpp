#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int secret, guess, tries = 0;

    // Generate random number between 1 and 100
    std::srand(std::time(0));
    secret = std::rand() % 100 + 1;

    std::cout << "=== Number Guessing Game ===" << std::endl;
    std::cout << "Guess a number between 1 and 100" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess > secret) {
            std::cout << "Too high! Try lower number." << std::endl;
        } 
        else if (guess < secret) {
            std::cout << "Too low! Try higher number." << std::endl;
        } 
        else {
            std::cout << "Correct! You guessed it in " << tries << " tries." << std::endl;
        }

    } while (guess != secret);

    return 0;
}