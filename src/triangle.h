#ifndef TRIANGLE:H
#define TRIANGLE_H

#include <iostream>

using namespace std;

class Triangle {
    private:
        //Data member, representing the sides of the triangle
        double a, b, c;

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
};

#endif //TRIANGLE_H