#include "KinematicsChoices.h"
#include <iostream>
#include "Useful Functions.h"

// FUNCTIONS FOR THE ONEDKINEMATICS FUNCTION OPTIONS

KinematicsChoices KinematicChoices;
void KinematicsChoices::finalVelocity() {
	std::cout << "Okay, let's calculate the final velocity!" << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	//KinematicsChoices KinematicChoices;
	KinematicChoices.setG(getUserInput());
	
	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "Now, how many seconds does the object take to hit the ground?" << std::endl;

	KinematicChoices.setT(getUserInput());

	std::cout << "Okay, your t value will be " << KinematicChoices.getT() << " seconds. " << std::endl;
	std::cout << "With the chosen values, the final velocity of the object is " << KinematicChoices.vfCalculation(KinematicChoices.getG(), KinematicChoices.getT()) << " meters per second." << std::endl;
}

void KinematicsChoices::timeTaken() {
	std::cout << "Okay, let's calculate the time taken!" << std::endl;
	std::cout << "What do you want h to be?" << std::endl;

	KinematicChoices.setH(getUserInput());

	std::cout << "Okay, your h value will be " << KinematicChoices.getH() << " meters." << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	KinematicChoices.setG(getUserInput());

	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "With the chosen values, it would take " << KinematicChoices.tCalculation(KinematicChoices.getH(), KinematicChoices.getG()) << " seconds to reach the ground." << std::endl;
}

void KinematicsChoices::distanceFell() {
	std::cout << "Okay, let's calculate the distance the object fell!" << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	KinematicChoices.setG(getUserInput());

	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "Now, how many seconds does the object take to hit the ground?" << std::endl;

	KinematicChoices.setT(getUserInput());

	std::cout << "Okay, your t value will be " << KinematicChoices.getT() << " seconds. " << std::endl;
	std::cout << "With the chosen values, the object will fall " << KinematicChoices.hCalculation(KinematicChoices.getG(), KinematicChoices.getT()) << " meters." << std::endl;
}

void KinematicsChoices::accelGravity() {

}

