#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/todos.h"

using namespace std;

int main()
{
    string mystr;
    ifstream box_stream("data/box.dat");
    ofstream out_stream("data/outt.json");
    box_car a;
    tank_car t;

    a.year_built = 2000;
    a.percentage_loaded = 80;

    while (getline(box_stream, mystr))
    {
        istringstream iss(mystr);
        iss >> a.height >> a.width >> a.length;
        cout << a.toJSON() << endl;
        out_stream << a.toJSON() << endl;
    }
    out_stream.close();
    cout << t.toJSON() << endl;
}
