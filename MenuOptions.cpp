#include "MenuOptions.h"
#include <iostream>
#include "Useful Functions.h"
#include "KinematicsChoices.h"


//FUNCTIONS FOR THE MAIN MENU OPTIONS

void MenuOptions::onedKinematics() {
	std::cout << "Alright, 1-D kinematics! For this option, we will have an object falling straight down, while ignoring air resistance." << std::endl;
	std::cout << "What variable do you want to solve for?" << std::endl;
	std::cout << "1. Final Velocity" << std::endl;
	std::cout << "2. Time taken to fall" << std::endl;
	std::cout << "3. The distance fell" << std::endl;
	std::cout << "4. The acceleration due to gravity" << std::endl;
	std::cout << "5. The final kinetic energy" << std::endl;
	std::cout << "6. The potential energy before being dropped" << std::endl;
	std::cout << "7. The total mechanical energy" << std::endl;
	
	KinematicsChoices KinematicChoices;
	while (true) {
		int choice = getMenuInput();
		if (choice == 1) {
			KinematicChoices.finalVelocity();
			break;
		}
		else if (choice == 2) {
			KinematicChoices.timeTaken();
			break;
		}
		else if (choice == 3) {
			KinematicChoices.distanceFell();
			break;
		}
		else if (choice == 4) {

		}
	}
	

	
	
}
