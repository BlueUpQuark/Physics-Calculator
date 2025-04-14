#include "SecondLawChoices.h"
#include <iostream>
#include "Useful Functions.h"

SecondLawChoices secondlawchoices;

void SecondLawChoices::netForce() {
	std::cout << "Okay, let's calculate the net force!" << std::endl;
	std::cout << "What do you want the mass to be?" << std::endl;

	secondlawchoices.setM(getUserInput());

	std::cout << "Okay, the mass will be " << secondlawchoices.getM() << " kg's" << std::endl;
	std::cout << "Now, what do you want the acceleration to be?" << std::endl;

	secondlawchoices.setA(getUserInput());

	std::cout << "Okay, the acceleration will be " << secondlawchoices.getA() << " meters per second squared" << std::endl;
	std::cout << "The net force is " << secondlawchoices.netForceCalc(secondlawchoices.getM(), secondlawchoices.getA()) << " newtons!" << std::endl;
}