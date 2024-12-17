#include "Triangle.h"

using namespace std;

//Default constructor
Triangle::Triangle() : a(0), b(0), c(0) {}

//Parameterized constructor
Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

//Setter for the sides
void Triangle::setSides(double a, double b, double c) {
    if (isValid(a, b, c)) {
        this->a = a;
        this->b = b;
        this->c = c;
    } else {
        throw invalid_argument("Invalid triangle sides: " + to_string(a) + ", " + to_string(b) + ", " + to_string(c));
    }
}

//Function to calculate the circumference of the triangle
double Triangle::circumference() const {
    return a + b + c;
}

//Area function
double Triangle::area() const {
    //Semi-perimeter
    double s = circumference() / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

//Function to print the details of the triangle
void Triangle::print() const {
    cout << "Triangle sides: " << a << ", " << b << ", " << c << endl;
    cout << "Circunference: " << circumference() << endl;
    cout << "Area: " << area() << endl;
}

//Private helper method to check the Triangle Inequality Theorem
bool Triangle::isValid(double a, double b, double c) const {
    return (a + b > c) && (a + c > b) && (b + c > a);
}