#include <iostream>
#include <iomanip>

#define in std::cin
#define out std::cout
using text = std::string;

void showBalance(double balance);
double deposit();
double withdraw(double balance); 


int main() {
    double balance = 300;
    int choice = 0;

    do {
        out << "*********************\n";
        out << "Banking operations: \n";
        out << "*********************\n";
        out << "1. Show balance \n";
        out << "2. Deposit money \n";
        out << "3. Withdraw money \n";
        out << "4. Exit \n";
        out << "*********************\n";
        out << "Enter a choice: ";
        in >> choice;

        // works bad
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
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
                out << ">> Thanks for visiting bank!\n";
                break;
            default:
                out << ">> Invalid operation!\n"; 
                break;
        }
        out << "\n\n";
    } while(choice != 4);

    return 0;
}


void showBalance(double balance) {
    out << ">> Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit() {
    double amount = 0;
    out << ">> Enter a money to be deposit: ";
    in >> amount;
    if (amount < 0) {
        amount = 0;
        out << ">> Not valid amount, call a withdraw!";
    }
    return amount;
}

double withdraw(double balance) {
    double amount = 0;
    out << ">> Enter a money to be withdrawn: ";
    in >> amount;
    if (amount > balance) {
        amount = 0;
        out << ">> Too large amount, credit not activated!\n";
        showBalance(balance);
    }
    else if (amount < 0) {
        amount = 0;
        out << ">> Not valid amount, call a deposit!";
    }
    return amount;
} 
