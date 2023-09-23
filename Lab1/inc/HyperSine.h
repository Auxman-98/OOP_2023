#ifndef HSINEFUNCTION_H_
#define HSINEFUNCTION_H_

#include "Function.h"

class HSineFunction : public Function {

public:

	HSineFunction();

	double evaluate(double x) const;

	virtual ~HSineFunction();

};

#endif