#include "SecondLawChoices.h"
#include <iostream>
#include "Useful Functions.h"

SecondLawChoices secondlawchoices;

void SecondLawChoices::netForce() {
	std::cout << "Okay, let's calculate the net force!" << std::endl;
	std::cout << "What do you want the mass to be?" << std::endl;

	secondlawchoices.setM(getUserInput());

	std::cout << "Okay, the mass will be " << secondlawchoices.getM() << " kg's" << std::endl;
}