#!/bin/bash

MODULES="SimpleVector SimpleCoordinate"


function fail {
	echo $0: $* > /dev/stderr
	exit 1
}


if [ ! -d o/ ]
then
	fail "Missing o/"
fi

#Clean out o/
rm -f o/* || fail "Error cleaning up object directory."

echo $0: Cleaned up object directory ./o/


for module in $MODULES
do
	if [ ! -e $module.cpp ]
	then
		fail "Missing $module.cpp"
	fi

	g++ -c $module.cpp -o o/$module.o ||
		fail "problems compiling $module.o"

	ls -lh o/$module.o

done

