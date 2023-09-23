#include "HyperCosine.h"

#include <cmath>

HCosineFunction::HCosineFunction() {}

HCosineFunction::~HCosineFunction() {}

double HCosineFunction::evaluate(double x) const {
	return cosh(x);
}