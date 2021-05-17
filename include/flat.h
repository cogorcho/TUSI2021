#ifndef FLAT_H
#define FLAT_H
#include <iostream>
#include "container.h"

using namespace std;

class flat : public container
{
public:
    double length, width;
    flat() { cout << "flat default constructor" << endl; }
    double surface() { return length * width; }
};

#endif