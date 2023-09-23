#ifndef SIMPSONRULE_H_
#define SIMPSONRULE_H_

#include "CalcStrategy.h"

class SimpsonRule : public CalculationStrategy {

private:

	double stepSize;

public:

	SimpsonRule(double stepSize);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~SimpsonRule();

};

#endif