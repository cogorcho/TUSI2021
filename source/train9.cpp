/*
	Concepts applied:
	read, write, display, testing, conditional execution,
	iteration, pointer dereferencing
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
		cout << car_count << endl;
		if (type_code == 0) 	 train[car_count] = new engine;
		else if (type_code == 1) train[car_count] = new box_car;
		else if (type_code == 2) train[car_count] = new tank_car;
		else if (type_code == 3) train[car_count] = new caboose;

	// Display
	cout << "There are " << car_count << " cars in this train" << endl;
	for (n = 0; n < car_count; n++)
		train[n]->display_short_name();
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
