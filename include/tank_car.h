#ifndef TANK_CAR_H
#define TANK_CAR_H

using namespace std;

#include "railroad_car.h"
#include "cylinder.h"

class tank_car : public railroad_car, public cylinder
{
public:
	string toJSON()
	{
		string s = "{\"tank_car\": {\n";
		s.append(railroad_car::toJSON());
		s.append(cylinder::toJSON());
		s.append(", \"volume\": \"");
		s.append(to_string(volume()));
		s.append("\"");
		s.append("}}");
		return s;
	}
	string toXML()
	{
		string s = "<tank_car>";
		s.append(railroad_car::toXML());
		s.append(cylinder::toXML());
		s.append("<volume>");
		s.append(to_string(volume()));
		s.append("</volume>");
		s.append("</tank_car>");
		return s;
	}
	tank_car() { }
	tank_car(double r, double l) { 
		cylinder::setRadius(r);
		cylinder::setLength(l);
	}
	virtual void display_short_name() { cout << "tank"; }
};

#endif
