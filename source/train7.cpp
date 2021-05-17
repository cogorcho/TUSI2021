#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/todos.h"

using namespace std;

int main()
{
     string mystr;
     ifstream box_stream("data/box.dat");
     ofstream out_stream("data/outbox.xml");
     box_car a;
     box_car *pa, *pb;

     cout << sizeof(a) << ", " << sizeof(pa) << ", "
          << sizeof(int) << endl;

     pa = new box_car();
     pb = new box_car;

     cout << sizeof(a) << ", " << sizeof(pa) << ", "
          << sizeof(int) << ", " << sizeof(*pa) << ", " << &pa << endl;

     a.year_built = 2010;
     a.percentage_loaded = 42;

     pa->year_built = 2000;
     pa->percentage_loaded = 80;

     pa->year_built = 2011;
     pa->percentage_loaded = 19;

     out_stream << "<train>" << endl;
     while (getline(box_stream, mystr))
     {
          istringstream iss(mystr);
          iss >> a.height >> a.width >> a.length;
          iss >> pa->height >> pa->width >> pa->length;
          iss >> pb->height >> pb->width >> pb->length;
          cout << a.toXML() << endl;
          cout << pa->toXML() << endl;
          cout << pb->toXML() << endl;
          out_stream << a.toXML() << endl;
          out_stream << pa->toXML() << endl;
          out_stream << pb->toXML() << endl;
     }
     out_stream << "</train>" << endl;
     out_stream.close();

     cout << sizeof(a) << ", " << sizeof(pa) << ", "
          << sizeof(int) << endl;

     delete pa;
     delete pb;
}
