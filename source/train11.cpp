/*
	Concepts applied:
	read, write, display, testing, conditional execution,
	iteration, pointer dereferencing, virtual_funcions,
	switch case
	analyze_train: train of railroad_cars
*/

#include <iostream>
#include "../include/todos.h"

using namespace std;

int main() {
	int car_count, type_code, n;
	railroad_car *train[100];

	// Ejemplo de "Filtro Iterativo"
	for (car_count = 0; cin >> type_code; ++car_count)
		switch (type_code)	 {
			case 0: { train[car_count] = new engine; break; }
			case 1: { train[car_count] = new box_car; break; }
			case 2: { train[car_count] = new tank_car; break; }
			case 3: { train[car_count] = new caboose; break; }
			case 4: { train[car_count] = new gondola_car; break; }
			default: { cerr << "Car code " << type_code << " is unknown!" << endl; }
		}
	
	// Display
	cout << "There are " << car_count << " cars in this train" << endl;
	for (n = 0; n < car_count; ++n) {
		train[n]->display_short_name(); cout << endl;
	}
}
