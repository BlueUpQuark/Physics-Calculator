#include <iostream>
#include <vector>
#include "Variables.h"
#include "MenuOptions.h"
#include "Useful Functions.h"

//std::vector<int> inputs;
//int input;



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
        if (getMenuInput() == 1) {
            MenuOptions.onedKinematics();
            break;
        }

    }
    
    

    
    

    

    

    
   


    

    
    
    return 0;
}


