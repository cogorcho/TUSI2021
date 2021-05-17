#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/todos.h"
using namespace std;

cylinder *tanques_ptrs[100];

int main()
{
	int counter, limit;
	double radius, length, sum = 0.0;
	string mystr;
	ifstream cyl_stream("data/cylinders.dat");

	// cargar array
	limit = 0;
	while (getline(cyl_stream, mystr))
	{
		istringstream iss(mystr);
		iss >> radius >> length;
		tanques_ptrs[limit] = new cylinder;
		tanques_ptrs[limit]->radius = radius;
		tanques_ptrs[limit]->length = length;
		limit++;
	}

	// Calcular volumen total
	for (counter = 0; counter < limit; counter++) {
		sum = sum + tanques_ptrs[counter]->volume();
	}

	cout << "El volumen total de " << limit << " tanques es " 
		<< sum << " unidades" << endl;

	return 0;
}
