#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator with current time
    std::srand(std::time(nullptr));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << " Welcome to the Number Guessing Game! " << std::endl;
    std::cout << "I have selected a secret number between 1 and 100." << std::endl;
    std::cout << "Your goal is to guess the number. Let's see how quickly you can find it!" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    // Loop until the user guesses the correct number
    do {
        std::cout << "\nEnter your guess: ";
        std::cin >> userGuess;
        attempts++;

        int difference = std::abs(userGuess - randomNumber);

        if (difference == 0) {
            std::cout << " Congratulations! You've guessed the number in " << attempts << " attempts! " << std::endl;
        } else if (difference < 10) {
            if (userGuess > randomNumber) {
                std::cout << "You're very close! Just think a lower number" << std::endl;
            } else {
                std::cout << "You're very close! Just think a higher number" << std::endl;
            }
        } else {
            if (userGuess > randomNumber) {
                std::cout << " Too high! Try a lower number." << std::endl;
            } else {
                std::cout << " Too low! Try a higher number." << std::endl;
            }
        }

    } while (userGuess != randomNumber);

    std::cout << "Thanks for playing! " << std::endl;
    return 0;
}


