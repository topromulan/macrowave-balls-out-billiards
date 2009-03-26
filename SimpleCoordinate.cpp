

#include "SimpleCoordinate.H"


void SimpleCoordinate::x(number n) {
	longitudinal = n;
};

void SimpleCoordinate::y(number n) {
	latitudinal = n;
};


number SimpleCoordinate::x(void) {
	return longitudinal;
};

number SimpleCoordinate::y(void) {
	return latitudinal;
};


