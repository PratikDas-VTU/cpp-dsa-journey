#include<iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice;

    do{
        std::cout << "***************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "***************\n";
        std::cin >> choice;

        switch(choice){
            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance -= withdraw(balance);
                break;

            case 4:
                std::cout << "Thank you! Visit again.\n";
                break;

            default:
                std::cout << "Invalid choice!\n";
        }

    }while(choice != 4);

    return 0;
}

// Show balance
void showBalance(double balance){
    std::cout << "Your balance is: ₹" << balance << "\n";
}

// Deposit function
double deposit(){
    double amount;

    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid amount!\n";
        return 0;
    }
}

// Withdraw function
double withdraw(double balance){
    double amount;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient balance!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Invalid amount!\n";
        return 0;
    }
    else{
        return amount;
    }
}