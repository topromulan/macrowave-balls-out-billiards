


#include "../SimpleVector.H"

int main(void) {

	SimpleVector charlie;

	charlie.set(1,2);

	if ( charlie.x() != 1 
		||
		charlie.y() != 2 ) 
	{
		return 1;
	}

	return 0;

}
