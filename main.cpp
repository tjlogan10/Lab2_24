/*
 Travis Logan
 C++ Fall 2024
 Due: Sept. 17 2024
 Lab 2: Exploring Output and Classes
 Lab description: This lab is used to get familiar with outputs and classes within C++. Additionaly, set and get functions are used to in order to find the surface area and volume of a cylinder when inputing the height and radius.
 */
#include <iostream>
#include "Cylinder.h"

int main()
{
    Cylinder s;
    s.setRadius(7);
    s.setHeight(4);
    std::cout << "The volume of the cylinder is: " << s.calculateVolume() << std::endl;
    std::cout << "The surface area of the cylinder is: " << s.calculateSurfaceArea() << std::endl;
    return 0;
}
