#include <iostream>
#include <fstream>
#include "../include/todos.h"

using namespace std;

int main()
{
    ifstream box_stream("data/box.dat");
    box_car a;
    box_car b;
    box_car *c = new box_car();
    tank_car t;
    b.year_built = 1943;
    b.percentage_loaded = 66;

    a.year_built = 2000;
    b.percentage_loaded = 80;

    box_stream >> a.height >> a.width >> a.length;
    cout << a.height << ", " << a.width << ", " << a.length << endl;
    cout << "The car is " << a.age() << " years old" << endl;
    cout << "And " << a.percentage_loaded << " percent loaded" << endl;
    cout << "Its volume is " << a.volume() << " units" << endl;
    cout << a.toString() << endl;
    cout << t.toString() << endl;
}
