#ifndef CONTAINER_H
#define CONTAINER_H

using namespace std;

class container
{
public:
	int percentage_loaded;
	container() {}
	std::string toJSON()
	{
		std::string s;
		s.append(",\"container\": {\"percentage_loaded\": \"");
		s.append(to_string(percentage_loaded));
		s.append("\"}");
		return s;
	}

	std::string toXML()
	{
		std::string s;
		s.append("<container><percentage_loaded>");
		s.append(to_string(percentage_loaded));
		s.append("</percentage_loaded></container>");
		return s;
	}
};

#endif
