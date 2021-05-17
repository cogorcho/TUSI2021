/*
	Concepts applied:
	read, write, display, testing, conditional execution,
	iteration, pointer dereferencing, virtual_funcions,
	switch case, enum
	analyze_train: train of railroad_cars
*/

#include <iostream>
#include "../include/todos.h"

using namespace std;
/*
const int eng_code = 0;
const int box_code = 1;
const int tnk_code = 2;
const int cab_code = 3;
const int gon_code = 4;
*/

enum {eng_code, box_code, tnk_code, cab_code, gon_code};

int main() {
	int car_count, type_code, n;
	railroad_car *train[100];

	// Ejemplo de "Filtro Iterativo"
	for (car_count = 0; cin >> type_code; ++car_count)
		switch (type_code)	 {
			case eng_code: { train[car_count] = new engine; break; }
			case box_code: { train[car_count] = new box_car; break; }
			case tnk_code: { train[car_count] = new tank_car; break; }
			case cab_code: { train[car_count] = new caboose; break; }
			case gon_code: { train[car_count] = new gondola_car; break; }
			default: { cerr << "Car code " << type_code << " is unknown!" << endl; }
		}
	
	// Display
	cout << "There are " << car_count << " cars in this train" << endl;
	for (n = 0; n < car_count; ++n) {
		train[n]->display_short_name(); cout << endl;
	}
}
