/*
	Concepts applied:
	contructor call other constructors
*/

#include <iostream>
#include "../include/container.h"
#include "../include/tank_car.h"

using namespace std;

int main() {
	tank_car *b = new tank_car(0.8, 11.2);
	tank_car *t = new tank_car(1.5, 6.0);

	cout  << "The volumen is: " << b->volume() << endl;
	cout  << "R: " << b->getRadius() << endl;
	cout  << "L: " << b->getLength() << endl;
	cout  << "The volumen is: " << t->volume() << endl;
	cout  << "R: " << t->getRadius() << endl;
	cout  << "L: " << t->getLength() << endl;
}
