#include<iostream>
#include<cstdlib>
#include<ctime>
#include <limits>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber{};
    int tries{};
    int computerGuess{};
    std::cout << "Enter a number for the computer to guess between 1 and 20000-> ";
    std::cin >> secretNumber;
    computerGuess = rand() % 20000 + 1;
    while (true) {
        ++tries;
        int previousGuess = computerGuess;
        if (computerGuess > secretNumber) {
            std::cout << computerGuess << std::endl;
            std::cout << "Too High" << std::endl;
            do {
                computerGuess = rand() % ( computerGuess - secretNumber + 1) + secretNumber;
            } while (previousGuess == computerGuess);
            continue;
        }
        if ( computerGuess < secretNumber) {
            std::cout << computerGuess << std::endl;
            std::cout << "Too Low" << std::endl;
            do {
                computerGuess = rand() % ( secretNumber - computerGuess + 1) + computerGuess;
            } while (previousGuess == computerGuess);
            continue;
        }
        if (computerGuess == secretNumber){
            std::cout << "Computer has finally guessed " << computerGuess << " and it took " << tries << " tries" <<  std::endl;
            break;
        }
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
