#ifndef HCOSINEFUNCTION_H_
#define HCOSINEFUNCTION_H_

#include "Function.h"

class HCosineFunction : public Function {

public:

	HCosineFunction();

	double evaluate(double x) const;

	virtual ~HCosineFunction();

};

#endif