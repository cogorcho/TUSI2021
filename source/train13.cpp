/*
	Concepts applied:
	contructor call other constructors
*/

#include <iostream>
#include "../include/box_car.h"

using namespace std;

int main() {
	box_car *b = new box_car();
	b->setHeight(3.0);
	b->setWidth(3.0);
	b->setLength(3.0);
	cout  << "The volumen is: " << b->volume() << endl;
	cout  << "H: " << b->getHeight() << endl;
	cout  << "W: " << b->getWidth() << endl;
	cout  << "L: " << b->getLength() << endl;
	cout  << "L: " << b->length << endl;
}
