#ifndef FLAT_CAR_H
#define FLAT_CAR_H
#include "railroad_car.h"
#include "flat.h"
#include <iostream>

using namespace std;

class flat_car : public railroad_car, public flat
{
public:
    flat_car()
    {
        std::cout << "flat_car default constructor" << std::endl;
        length = 40.0;
        width = 5.5;
    }
};

#endif