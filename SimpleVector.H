

#include "Number.H"

class SimpleVector {

	private: 

	number horizontal;
	number vertical;

	public:

	void x(number n);
	void y(number n);

	number x(void);
	number y(void);

	void set(number nx, number ny) {
		
		x(nx);
		y(ny);

	};

};
