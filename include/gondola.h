#ifndef GONDOLA_CAR_H
#define GONDOLA_CAR_H

#include "railroad_car.h"
#include "box.h"

class gondola_car : public railroad_car, public box
{
public:
    gondola_car()
    {
        height = 6.0;
        width = 9.2;
        length = 40.0;
    }
    double volume()
    {
        return 1.2 * height * width * length;
    }
};

#endif