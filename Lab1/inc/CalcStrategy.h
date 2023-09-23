#ifndef CALCULATIONSTRATEGY_H_
#define CALCULATIONSTRATEGY_H_

#include "Function.h"

class CalculationStrategy {
public:

	CalculationStrategy() {}

	virtual double calculate(const Function& function, double loLimit, double upLimit) = 0;

	virtual ~CalculationStrategy() {}

};

#endif