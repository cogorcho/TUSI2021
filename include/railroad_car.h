#ifndef RAILROAD_CAR_H
#define RAILROAD_CAR_H
using namespace std;
int current_year = 2021;
class railroad_car
{
public:
	int year_built;
	railroad_car() { }
	// virtual display function
	virtual void display_short_name() { cout << "rrc ";}
	int age() { return current_year - year_built; }
	std::string toJSON()
	{
		std::string s;
		s.append("\"railroad_car\": {\"year_buit\": \"");
		s.append(to_string(year_built));
		s.append("\", \"age\": \"");
		s.append(to_string(age()));
		s.append("\"}");
		return s;
	}
	std::string toXML()
	{
		std::string s;
		s.append("<railroad_car><year_built>");
		s.append(to_string(year_built));
		s.append("</year_built><age>");
		s.append(to_string(age()));
		s.append("</age></railroad_car>");
		return s;
	}
};
#endif
