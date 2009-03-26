

#include "SimpleCoordinate.H"


void SimpleCoordinate::x(number n) {
	longitudinal = n;
};

void SimpleCoordinate::y(number n) {
	latitudinal = n;
};


number SimpleVector::x(void) {
	return longitudinal;
};

number SimpleVector::y(void) {
	return latitudinal;
}


