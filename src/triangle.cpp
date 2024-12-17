#include "Triangle.h"

using namespace std;

//Default constructor
Triangle::Triangle() : a(0), b(0), c(0) {}

//Parameterized constructor
Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

//Setter for the sides
void Triangle::setSides(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}
