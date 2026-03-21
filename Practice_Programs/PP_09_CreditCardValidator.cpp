#include<iostream>
#include<string>

int getDigit(int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid\n";
    }
    else{
        std::cout << cardNumber << " is not valid\n";
    }

    return 0;
}

// 🔹 If number > 9 → split digits (e.g., 12 → 1+2 = 3)
int getDigit(int number){
    if(number % 10 == 0){
        return 9;
    }
    return number % 10;
}

// 🔹 Sum of digits at odd positions (from right)
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.length() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }

    return sum;
}

// 🔹 Double even position digits and process
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.length() - 2; i >= 0; i -= 2){
        int digit = (cardNumber[i] - '0') * 2;
        sum += getDigit(digit);
    }

    return sum;
}