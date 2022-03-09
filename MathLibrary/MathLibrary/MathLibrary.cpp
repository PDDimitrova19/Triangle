#include <iostream>
#include <cmath>
#include "MathLibrary.h"
using namespace std;

double perimeter(TRIANGLE side) {
	return side.a + side.b + side.c;
}

double plot(TRIANGLE side) {
	double p = side.a + side.b + side.c;
	return sqrt(p*(p-side.a)*(p-side.b)*(p-side.c));
}