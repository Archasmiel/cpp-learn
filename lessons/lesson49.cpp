#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main() {

    char spaces[9];
    std::fill(spaces, spaces+9, ' ');
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }
    }

    return 0;
}


void drawBoard(char *spaces) {
    std::cout << '\n';
    std::cout << "1    |2    |3    \n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "4    |5    |6    \n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "7    |8    |9    \n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    std::cout << "     |     |     \n";
    std::cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;

        if (number < 0 || number > 8) {
            continue;
        }

        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while (true);
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while(true) {
        number = rand() % 9; 
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkLine(char *spaces, int i1, int i2, int i3) {
    return spaces[i1] == spaces[i2] && spaces[i2] == spaces[i3] && spaces[i1] != ' ';
}

bool checkWinner(char *spaces, char player, char computer) {
    if (checkLine(spaces, 0, 1, 2)) {
        (spaces[0] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if (checkLine(spaces, 3, 4, 5)) {
        (spaces[3] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if (checkLine(spaces, 6, 7, 8)) {
        (spaces[6] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }

    else if (checkLine(spaces, 0, 3, 6)) {
        (spaces[0] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if (checkLine(spaces, 1, 4, 7)) {
        (spaces[1] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if (checkLine(spaces, 2, 5, 8)) {
        (spaces[2] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }

    else if (checkLine(spaces, 0, 4, 8)) {
        (spaces[0] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if (checkLine(spaces, 2, 4, 6)) {
        (spaces[2] == player) ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else {
        return 0;
    }
    return 1;
}

bool checkTie(char *spaces) {

    for (int i = 0 ; i < 9 ; i++) {
        if (spaces[i] == ' ') {
            return 0;
        }
    }
    std::cout << "Its a tie!\n";

    return 1;
}
