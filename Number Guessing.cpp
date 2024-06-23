// Task-1 Number Guessing Game 
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    bool guessed = false;

    while (!guessed) {
        // Ask the user for their guess
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;

        // Check if the guess is correct
        if (guess == secretNumber) {
            std::cout << " Congratulations! You guessed the correct number!" << std::endl;
            guessed = true;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}
