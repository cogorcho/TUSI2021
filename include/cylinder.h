#ifndef CYLINDER_H
#define CYLINDER_H

using namespace std;

const double pi = 3.14159;

class cylinder : public container
{
private:
	double radius, length;

protected:
        void setRadius(double r){ radius = r; }
        void setLength(double l){ length = l; }
public:
	cylinder() {}
	double volume() { return pi * radius * radius * length; }
	std::string toJSON()
	{
		std::string s;
		s.append(container::toJSON());
		s.append(",\"cylinder\": {\"radius\": \"");
		s.append(to_string(radius));
		s.append("\", \"length\": \"");
		s.append(to_string(length));
		s.append("\"}");
		return s;
	}
	std::string toXML()
	{
		std::string s;
		s.append("<cylinder>");
		s.append(container::toXML());
		s.append("<radius>");
		s.append(to_string(radius));
		s.append("</radius>");
		s.append("<length>");
		s.append(to_string(length));
		s.append("</length>");
		s.append("</cylinder>");
		return s;
	}

        double getRadius() { return radius; }
        double getLength() { return length; }


};

#endif
