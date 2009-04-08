#!/bin/bash

function fail {
	echo $0: $* > /dev/stderr
	exit 1
}

function build_test {

	g++ $1 $2 -o bin/tests/$3 || fail "testbuild $1 $2 $3 failed"

	ls -lh bin/tests/$3

}

#This is a sanity check to make sure we don't go removing
# files or creating build directories in a random place.
#This just makes sure the working directory has billiard in the name
pwd | sed 's/^.*\///' | grep -q billiard || fail "Not in a billiards directory"


#Let it fail for now. Make smart later, maybe.
[ -d bin/tests ] || fail "./bin/tests/ does not exist.."

#Remove old tests:
rm -f bin/tests/* || fail "Error removing old tests."

echo $0: Old tests removed.

build_test tests/TestSimpleVector.cpp o/SimpleVector.o SimpleVector
build_test tests/TestSimpleCoordinate.cpp o/SimpleCoordinate.o SimpleCoordinate


