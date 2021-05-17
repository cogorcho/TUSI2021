/*
	Concepts applied:
	read, write, display, testing, conditional execution,
	iteration, pointer dereferencing, virtual_funcions
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
		if (type_code == 0) 	 train[car_count] = new engine;
		else if (type_code == 1) train[car_count] = new box_car;
		else if (type_code == 2) train[car_count] = new tank_car;
		else if (type_code == 3) train[car_count] = new caboose;
		else if (type_code == 4) train[car_count] = new gondola_car;

	// Display
	cout << "There are " << car_count << " cars in this train" << endl;
	for (n = 0; n < car_count; ++n) {
		train[n]->display_short_name(); cout << endl;
	}
}
/*
	// Ejemplo de "Filtro Iterativo"
	while(cin >> type_code) 
		if (type_code == 0) cout << "eng" << endl;
		else if (type_code == 1) cout << "box" << endl;
		else if (type_code == 2) cout << "tnk" << endl;
		else if (type_code == 3) cout << "cab" << endl;
		else cout << "No existe ese tipo de elemento rodante" << endl;
*/
