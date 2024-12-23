#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Triangle {
    private:
        //Data member, representing the sides of the triangle
        double a, b, c;

        //Helper method to check the Triangle Inequality Theorem
        bool isValid(double a, double b, double c) const;

    public:
        //Default constructor
        Triangle();

        //Parameterized constructor
        Triangle(double a, double b, double c);

        //Setter for the sides
        void setSides(double a, double b, double c);

        //Function to calculate the circumference of the triangle
        double circumference() const;

        //Area function
        double area() const;

        //Function to print the details of the triangle
        void print() const;
};

#endif //TRIANGLE_H