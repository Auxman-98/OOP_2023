#ifndef TRAPEZOIDALRULE_H_
#define TRAPEZOIDALRULE_H_

#include "CalcStrategy.h"

class TrapezoidRule: public CalculationStrategy {

private:

	double stepSize;

public:

	TrapezoidRule(double stepSize);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~TrapezoidRule();

};
#endif