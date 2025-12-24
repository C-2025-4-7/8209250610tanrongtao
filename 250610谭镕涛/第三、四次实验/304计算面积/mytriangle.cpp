#include <iostream>
#include<cmath>
#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
    return (side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1);
}

double area(double side1, double side2, double side3) 
{
    double s,triarea;
    s = (side1 + side2 + side3) / 2;
    triarea = sqrt(s*(s - side1)*(s - side2)*(s - side3));
    return triarea;
}