#include "KinematicsChoices.h"
#include <iostream>
#include "Useful Functions.h"

// FUNCTIONS FOR THE ONEDKINEMATICS FUNCTION OPTIONS

KinematicsChoices KinematicChoices;
int check;
void KinematicsChoices::finalVelocity() {
	check = 1;
	std::cout << "Okay, let's calculate the final velocity!" << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	//KinematicsChoices KinematicChoices;
	KinematicChoices.setG(getUserInput());
	
	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "Now, how many seconds does the object take to hit the ground?" << std::endl;

	KinematicChoices.setT(getUserInput());

	std::cout << "Okay, your t value will be " << KinematicChoices.getT() << " seconds. " << std::endl;
	std::cout << "With the chosen values, the final velocity of the object is " << KinematicChoices.varCalculation(KinematicChoices.getG(), KinematicChoices.getT()) << " meters per second." << std::endl;
	//std::cout << "With the chosen values, the final velocity of the object is " << KinematicChoices.vfCalculation(KinematicChoices.getG(), KinematicChoices.getT()) << " meters per second." << std::endl;
}

void KinematicsChoices::timeTaken() {
	check = 2;
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
	check = 3;
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
	check = 4;
	std::cout << "Okay, let's calculate the acceleration due to gravity!" << std::endl;
	std::cout << "What do you want h to be?" << std::endl;

	KinematicChoices.setH(getUserInput());

	std::cout << "Okay, your h value will be " << KinematicChoices.getH() << " meters." << std::endl;
	std::cout << "Now, how many seconds does the object take to hit the ground?" << std::endl;

	KinematicChoices.setT(getUserInput());

	std::cout << "Okay, your t value will be " << KinematicChoices.getT() << " seconds. " << std::endl;
	std::cout << "With the chosen values, the object's acceleration due to gravity will be " << gCalculation(KinematicChoices.getH(), KinematicChoices.getT()) << " meters per second squared." << std::endl;
}

void KinematicsChoices::finalKE() {
	check = 5;
	std::cout << "Okay, let's calculate the final kinetic energy!" << std::endl;
	std::cout << "What do you want the mass to be?" << std::endl;

	KinematicChoices.setM(getUserInput());

	std::cout << "Okay, the mass of the object will be " << KinematicChoices.getM() << " kg" << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	KinematicChoices.setG(getUserInput());

	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "What do you want h to be?" << std::endl;

	KinematicChoices.setH(getUserInput());

	std::cout << "Okay, your h value will be " << KinematicChoices.getH() << " meters." << std::endl;
	std::cout << "With the chosen values, the object's final kinetic energy is " << KinematicChoices.KefCalculation(KinematicChoices.getM(), KinematicChoices.getG(), KinematicChoices.getH()) << " joules" << std::endl;
}

void KinematicsChoices::initPE() {
	std::cout << "Okay, let's calculate the initial potential energy!" << std::endl;
	std::cout << "What do you want the mass to be?" << std::endl;

	KinematicChoices.setM(getUserInput());

	std::cout << "Okay, the mass of the object will be " << KinematicChoices.getM() << " kg" << std::endl;
	std::cout << "What do you want g to be?" << std::endl;

	KinematicChoices.setG(getUserInput());

	std::cout << "Okay, your g value will be " << KinematicChoices.getG() << " meters per second squared." << std::endl;
	std::cout << "What do you want h to be?" << std::endl;

	KinematicChoices.setH(getUserInput());

	std::cout << "Okay, your h value will be " << KinematicChoices.getH() << " meters." << std::endl;
	std::cout << "With the chosen values, the object's initial potential energy is " << KinematicChoices.PeiCalculation(KinematicChoices.getM(), KinematicChoices.getG(), KinematicChoices.getH()) << " joules" << std::endl;
}

void KinematicsChoices::finalMom() {
	std::cout << "Okay, let's calculate the final momentum!" << std::endl;
	std::cout << "What do you want the mass to be?" << std::endl;

	KinematicChoices.setM(getUserInput());

	std::cout << "Okay, the mass of the object will be " << KinematicChoices.getM() << " kg" << std::endl;
	std::cout << "What do you want the final velocity to be?" << std::endl;

	KinematicChoices.setVf(getUserInput());

	std::cout << "Okay, the final velocity will be " << KinematicChoices.getVf() << " meters per second" << std::endl;
	std::cout << "With the chosen values, the object's final momentum is " << KinematicChoices.PfCalculation(KinematicChoices.getM(), KinematicChoices.getVf()) << " kg * m/s" << std::endl;
}

