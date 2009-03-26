


#include "../SimpleCoordinate.H"


int main(void) {


	SimpleCoordinate horse;

	horse.set(11,31);

	if ( horse.x() != 11
		||
		horse.y() != 31 )
	{
		return 2;
	}


	return 0;
}
