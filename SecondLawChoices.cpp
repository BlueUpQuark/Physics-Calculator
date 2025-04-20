#include "SecondLawChoices.h"
#include <iostream>
#include "Useful Functions.h"

SecondLawChoices secondlawchoices;
int check2;

void SecondLawChoices::netForce() {
	check2 = 0;
	std::cout << "Okay, let's calculate the net force!" << std::endl;
	std::cout << "What do you want the mass to be?" << std::endl;

	secondlawchoices.setM(getUserInput());

	std::cout << "Okay, the mass will be " << secondlawchoices.getM() << " kg's" << std::endl;
	std::cout << "Now, what will the acceleration be? " << std::endl;

	secondlawchoices.setA(getUserInput());

	std::cout << "Okay, the acceleration will be " << secondlawchoices.getA() << " meters per second squared." << std::endl;
	std::cout << "Based on these values, the net force will be " << secondlawchoices.netForceCalc(secondlawchoices.getM(), secondlawchoices.getA()) << " Newtons!" << std::endl;
}

void SecondLawChoices::mass() {
	check2 = 1;
	std::cout << "Okay, let's calculate the mass!" << std::endl;
	std::cout << "Now, what will the net force be?" << std::endl;

	secondlawchoices.setNf(getUserInput());

	std::cout << "Okay, the net force will be " << secondlawchoices.getNf() << " newtons." << std::endl;
	std::cout << "Now, what will the acceleration be?" << std::endl;

	secondlawchoices.setA(getUserInput());

	std::cout << "Okay, the acceleration will be " << secondlawchoices.getA() << " meters per second squared." << std::endl;
	std::cout << "Based on these values, the mass is " << secondlawchoices.mCalculation(secondlawchoices.getNf(), secondlawchoices.getA()) << " kg's!" << std::endl;
}





