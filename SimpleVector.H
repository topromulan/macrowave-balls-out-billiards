

typedef double number;

class SimpleVector {

	private: 

	number longitudinal;
	number latitudinal;

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
