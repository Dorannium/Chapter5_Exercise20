/*
Title: Chapter 5 Exercise 20, - Random number Guessing Game
File Name: Chapter5_Exercise20
Programmer: Cody Drumheller
Date:20201202
Requirements: Write a program that generates a random number and asks the user to guess what the number is.
If the user’s guess is higher than the random number, the program should display “Too high, try again.”
If the user’s guess is lower than the random number, the program should display “Too low, try again.”
The program should use a loop that repeats until the user correctly guesses the random number.

*/

#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Try to guess what it is!\n";

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high, try again.\n";
        }
        else if (userGuess < randomNumber) {
            cout << "Too low, try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << "!\n";
        }
    }

    return 0;
}













