#include <iostream>

using namespace std;

const double pi = 3.14159;
int current_year = 2021;

class container {
	public:
		int percentage_loaded;
		container() { cout << "container default constructor" << endl; }
};

class box : public container{
	public:
		double height, width, length;
		box() { cout << "box default constructor" << endl; }
		double volume() { return height * width * length; }
};

class cylinder : public container{
	public:
		double radius, length;
		cylinder() { cout << "cylinder default constructor" << endl; }
		double volume() { return pi * radius * radius * length; }
};

class railroad_car {
	public:
		int year_built;
		railroad_car() { cout << "railroad_car default constructor" << endl; }
		int age() { return current_year - year_built; }
};

class caboose: public railroad_car  {
	public: 
		caboose() { cout << "caboose default constructor" << endl; }
};

class engine: public railroad_car  {
	public: 
		engine() { cout << "engine default constructor" << endl; }
};

class box_car: public railroad_car, public box {
	public: 
		box_car() {
			cout << "box_car default constructor" << endl;
			height = 10.5;
			width = 9,2;
			length = 40.0;
		}
};

class tank_car: public railroad_car, public cylinder {
	public: 
		tank_car() {
			cout << "tank_car default constructor" << endl;
			radius = 3.5;
			length = 40.0;
		}
};

class gondola_car: public railroad_car, public box {
	public:
		gondola_car() {
			height = 6.0;
			width = 9.2;
			length = 40.0;
		}
		double volume() {
			return 1.2 * height * width * length; 
		}
};

int main() {
		gondola_car g;
		cout << "As a gondola car, the volume is " <<
				g.volume() << " units. " << endl;
		cout << "As a box car, the volume is " <<
				g.box::volume() << " units. " << endl;
}
