#ifndef BOX_H
#define BOX_H

#include "container.h"

class box : public container
{
private:
	double height, width, length;

public:
	box() {}
	box(double h, double w, double l) {
		height = h;
		width = w;
		length = l;
	}
	double volume() { return height * width * length; }

	double getHeight() { return height; }
	double getWidth() { return width; }
	double getLength() { return length; }

	void setHeight(double h){ height = h; }
	void setWidth(double w){ width = w; }
	void setLength(double l){ length = l; }
	
	string toJson()
	{
		string s;
		s.append(container::toJSON());
		s.append(",\"box\": {");
		s.append("\"height\": \"");
		s.append(to_string(height));
		s.append("\", \"width\": \"");
		s.append(to_string(width));
		s.append("\", \"length\": \"");
		s.append(to_string(length));
		s.append("\"}");
		return s;
	}
	string toXML()
	{
		string s;
		s.append("<box>");
		s.append(container::toXML());
		s.append("<height>");
		s.append(to_string(height));
		s.append("</height>");
		s.append("<width>");
		s.append(to_string(width));
		s.append("</width>");
		s.append("<length>");
		s.append(to_string(length));
		s.append("</length>");
		s.append("</box>");
		return s;
	}
};

#endif
