#pragma once
#include <iostream>

inline void clearErrorState() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // USE IF YOU WANT TO CLEAR AN INVALID INPUT
}

inline double getUserInput() {
    int input;
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

inline double getMenuInput() {
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

