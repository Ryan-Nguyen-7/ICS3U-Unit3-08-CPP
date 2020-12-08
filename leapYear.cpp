// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program ask user for a year
//     and checks if it is a leap year


#include <iostream>
#include <string>

// declaring constants

int main() {
    // this function checks leap year

    // declaring constants
    const int RULES_A = 4;
    const int RULES_B = 100;
    const int RULES_C = 400;


    std::string yearAsString;
    int yearAsNumber;

    // input
    std::cout << "Enter year: ";
    std::cin >> yearAsString;

    // process + output
    try {
        yearAsNumber = std::stoi(yearAsString);
        if (yearAsNumber % RULES_A == 0) {
             if (yearAsNumber % RULES_B == 0) {
                 if (yearAsNumber % RULES_C == 0) {
                    std::cout << "Leap year";
                } else {
                    std::cout << "Not a leap year";
                }
            } else {
                    std::cout << "Leap year";
            }
        } else {
            std::cout << "Not a leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid year";
        }
}
