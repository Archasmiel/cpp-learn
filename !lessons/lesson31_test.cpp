#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {                                                             
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice() {

    char player;
    do {
        std::cout << "\n\n";
        std::cout << "Choose one of following: \n";
        std::cout << "************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cout << "************************\n";
        std::cout << "Type your choice: ";
        std::cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {
    srand(time(0));
    int num = rand() % 3;

    switch(num) {
        case 0: 
            return 'r';
        case 1: 
            return 'p';
        case 2: 
            return 's';
    }

    return 0;
}

void showChoice(char choice) {
    switch(choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}

void chooseWinner(char player, char computer) {
    
    switch(player) {
        case 'r':   
            if (computer == 'r') std::cout << "Its a tie!\n"; 
            else if (computer == 'p') std::cout << "You lose!\n";
            else std::cout << "You won!\n";
            break;
        case 'p':   
            if (computer == 'r') std::cout << "You won!\n";
            else if (computer == 'p') std::cout << "Its a tie!\n"; 
            else std::cout << "You lose!\n";
            break;
        case 's':   
            if (computer == 'r') std::cout << "You lose!\n";
            else if (computer == 'p') std::cout << "You won!\n";
            else std::cout << "Its a tie!\n"; 
            break;
    }
}
