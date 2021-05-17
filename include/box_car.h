#ifndef BOX_CAR_H
#define BOX_CAR_H
#include <string>
#include "railroad_car.h"
#include "box.h"

class box_car : public railroad_car, public box
{
public:
	string toJSON()
	{
		string s = "{'box_car': {\n";
		s.append(railroad_car::toJSON());
		s.append(box::toJSON());
		s.append(", \"volume\": \"");
		s.append(to_string(volume()));
		s.append("\"");
		s.append("}}");
		return s;
	}

	string toXML()
	{
		string s = "<box_car>";
		s.append(railroad_car::toXML());
		s.append(box::toXML());
		s.append("<volume>");
		s.append(to_string(volume()));
		s.append("</volume>");
		s.append("</box_car>");
		return s;
	}

	box_car():box(0.0, 0.0, 0.0) {}
	virtual void display_short_name() { cout << "box"; }
};

#endif
