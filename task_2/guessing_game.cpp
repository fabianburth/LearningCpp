#include <cstdlib>
#include <iostream>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int randvar{ std::rand() % 100 };
    std::cout << randvar << '\n';
    int guess{ 0 };
    std::cin >> guess;

    if(guess < randvar) {
        std::cout << "Your number is smaller than the target one! \n";
    } else if (guess > randvar)
    {
        std::cout << "Your number is larger than the target one! \n";
    } else {
        std::cout << "You have guessed the number \n";
    }
    
}