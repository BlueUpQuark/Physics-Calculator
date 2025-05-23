#include <iostream>
#include <vector>
#include "Variables.h"
#include "MenuOptions.h"
#include "Useful Functions.h"
#include <windows.h>
#include <psapi.h>

void mainMenu() {
    std::cout << "Please, choose from the available options to calculate." << std::endl; // JUST THE OPENING MENU, BUT NO INTRODUCTION
    std::cout << "1. 1-D Kinematics" << std::endl;
    std::cout << "2. Newton's second law" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "" << std::endl;
}


int main()
{
    std::cout << "*****Welcome to the Quark physics calculator V 1.0!*****" << std::endl;
    std::cout << "Please, choose from the available options to calculate." << std::endl; // JUST THE OPENING MENU
    std::cout << "1. 1-D Kinematics" << std::endl;
    std::cout << "2. Newton's second law" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "" << std::endl;
    
    MenuOptions MenuOptions;
    while (true) {
        int choice = getMenuInput();
        if (choice == 1) {
            MenuOptions.onedKinematics();
            int choice = anotherCalculation("one-d kinematics");
            if (choice == 1) {
                mainMenu();
            }
            else if (choice == 2) {
                do {
                    MenuOptions.onedKinematics_again();
                    choice = anotherCalculation("one-d kinematics");
                } while (choice == 2);

                mainMenu();
            }
            
        }
        else if (choice == 2) {
            MenuOptions.secondLaw();
        }


    }
    
    

    
    

    

    

    
   


    

    
    
    return 0;
}


