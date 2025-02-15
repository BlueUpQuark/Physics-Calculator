#pragma once
#include <iostream>

inline void clearErrorState() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // USE IF YOU WANT TO CLEAR AN INVALID INPUT
}

inline double getUserInput() {
    double input;
    std::cout << "Enter a value:" << std::endl;
    while (true) {
        if (std::cin >> input) {
            break;
        }                                                                    // USE WHEN GETTING USER INPUT FOR VARIABLES
        else {
            clearErrorState();
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }
    return input;
}

inline int getMenuInput() {
    int input;
    std::cout << "Enter an option:" << std::endl;
    while (true) {
        if (std::cin >> input) {
            break;
        }                                                                    // USE WHEN GETTING USER INPUT FOR A MENU OPTION
        else {
            clearErrorState();
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }
    return input;
}

inline int anotherCalculation(std::string menuOption) {
    std::cout << "Would you like to do another " << menuOption << " calculation?" << std::endl;
    std::cout << "1. No" << std::endl;
    std::cout << "2. Yes" << std::endl;

    int choice = getMenuInput();
    return choice;
}



