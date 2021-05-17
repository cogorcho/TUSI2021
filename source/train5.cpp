#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/todos.h"

using namespace std;

int main()
{
    string mystr;
    ifstream box_stream("data/box.dat");
    box_car a;
    tank_car t;

    a.year_built = 2000;
    a.percentage_loaded = 80;

    while (getline(box_stream, mystr))
    {
        istringstream iss(mystr);
        iss >> a.height >> a.width >> a.length;
        cout << a.toJSON() << endl;
    }
    /*
    cout << a.height << ", " << a.width << ", " << a.length << endl;
    cout << "The car is " << a.age() << " years old" << endl;
    cout << "And " << a.percentage_loaded << " percent loaded" << endl;
    cout << "Its volume is " << a.volume() << " units" << endl;
    cout << a.toString() << endl;
*/
    cout << t.toJSON() << endl;
}
