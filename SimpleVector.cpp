

#include "SimpleVector.H"


void SimpleVector::x(number n) {
		longitudinal = n;
};

void SimpleVector::y(number n) {
		latitudinal = n;
};


number SimpleVector::x(void) {
		return longitudinal;
};

number SimpleVector::y(void) {
		return latitudinal;
};









