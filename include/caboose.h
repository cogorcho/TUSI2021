#ifndef CABOOSE_H
#define CABOOSE_H

#include "railroad_car.h"

class caboose : public railroad_car
{
public:
	caboose() {}
	virtual void display_short_name() { cout << "caboose"; }
};

#endif
