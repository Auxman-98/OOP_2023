#include <iostream>

#include "HyperCosine.h"
#include "HyperSine.h"

#include "TrapezoidalRule.h"
#include "SimpsonRule.h"

const double STEP_SIZE = 1e-4;

int main() {
	
	double a = 0;
	double b = 0.1;

	std::cout << std::endl << "HCOSINE" << std::endl << std::endl;

	HCosineFunction hcosine;

	for (int i = 0; i < 10; i++, b += 0.1) {
		std::cout << "a = 0" << std::endl;
		std::cout << "b = " << b << std::endl;

		TrapezoidRule trapezoidRule(STEP_SIZE);
		SimpsonRule simpsonRule(STEP_SIZE);

		std::cout << "Trapezoidal Rule == ";
		std::cout << trapezoidRule.calculate(hcosine, a, b) << std::endl;
		std::cout << "Simpson Rule == ";
		std::cout << simpsonRule.calculate(hcosine, a, b) << std::endl;

		std::cout << std::endl;
	}

	b = 0.1;

	std::cout << std::endl << "HSINE" << std::endl << std::endl;

	HSineFunction hsine;

	for (int i = 0; i < 10; i++, b += 0.1) {
		std::cout << "a = 0" << std::endl;
		std::cout << "b = " << b << std::endl;

		TrapezoidRule trapezoidRule(STEP_SIZE);
		SimpsonRule simpsonRule(STEP_SIZE);

		std::cout << "Trapezoidal Rule == ";
		std::cout << trapezoidRule.calculate(hsine, a, b) << std::endl;
		std::cout << "Simpson Rule == ";
		std::cout << simpsonRule.calculate(hsine, a, b) << std::endl;

		std::cout << std::endl;
	}

	return 0;
}