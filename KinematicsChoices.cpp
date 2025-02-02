#include "KinematicsChoices.h"
#include <iostream>
#include "Useful Functions.h"

void KinematicsChoices::finalVelocity() {
	std::cout << "Okay, let's calculate the final velocity!" << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	KinematicsChoices KinematicChoices;
	KinematicChoices.setG(getUserInput());
	
	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "Now, how many seconds does the object take to hit the ground?" << std::endl;

	KinematicChoices.setT(getUserInput());

	std::cout << "Okay, your t value will be " << KinematicChoices.getT() << " seconds. " << std::endl;
	std::cout << "With the chosen values, the final velocity of the object is " << KinematicChoices.vfCalculation(KinematicChoices.getG(), KinematicChoices.getT()) << " meters per second." << std::endl;
}

