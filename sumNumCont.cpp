// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/10
// Gets the user input for amount of numbers
// then gets the user input for said numbers using
// A while loop. Displays the sum of all numbers

#include <iostream>
#include <string>

int main() {
    // Variables
    std::string amountString;
    std::string numberString;
    int amountInt;
    int numberInt;
    float amountFloat;
    float numberFloat;
    int sum = 0;

    // Title
    std::cout << "Sum of many numbers\n";
        // User Input
        std::cout <<
        "Enter the amount of numbers you would like to add together ";
        std::cin >> amountString;

        // Try catch for the amount
        try {
            amountInt = std::stoi(amountString);
            float amountFloat = stof(amountString);

            // To make sure the user guess is not a decimal
            if (amountFloat != static_cast<int>(amountFloat)
            || amountFloat < 0) {
                std::cout << "Please enter a whole number!\n";
            } else {
                if (amountInt >= 0) {
                    while (amountInt > 0) {
                        std::cout << "Enter a number: ";
                        std::cin >> numberString;
                        // Try Catch for the number input
                        try {
                            numberInt = std::stoi(numberString);
                            float numberFloat = stof(numberString);
                            // To make sure the user guess is not a decimal
                            if (amountFloat != static_cast<int>(amountFloat)
                            || amountFloat < 0) {
                                std::cout << "Please enter a whole number!\n";
                            } else {
                                // Calculations
                                if (numberInt > 0) {
                                    sum = sum + numberInt;
                                    amountInt = amountInt - 1;
                                } else {
                                    continue;
                                }
                                std::cout << numberInt
                                << " Added to the sum \n";
                            }
                        // Exception statement
                        } catch (std::invalid_argument) {
                            std::cout << "Please enter an integer!\n";
                        }
                }
                } else {
                    std::cout << "Please enter a positive number! \n";
                }
                std::cout << "The sum is " << sum;
            }
        // Exception statement
        } catch (std::invalid_argument) {
            std::cout << "Please enter an integer!\n";
        }
}
