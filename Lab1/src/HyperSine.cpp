#include "HyperSine.h"

#include <cmath>

HSineFunction::HSineFunction() {}

HSineFunction::~HSineFunction() {}

double HSineFunction::evaluate(double x) const {
	return sinh(x);
}