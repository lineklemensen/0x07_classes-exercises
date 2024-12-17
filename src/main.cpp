#include "Triangle.h"
#include "test_util.h"

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {

  //Test valid triangle according to the Triangle Inequality Theorem
  try
  {
    //Test of the default constructor and setSides function
    Triangle t1 = Triangle();
    t1.setSides(2, 3, 4);
    cout << "Triangle t1: " << endl;
    t1.print();
    cout << endl;

    //Test of the parameterized constructor 
    Triangle t2(6, 8, 10);
    cout << "Triangle t2: " << endl;
    t2.print();
    cout << endl;

    //Test of the circumfernce and area functions
    cout << "Circumference of t1: " << t1.circumference() << endl;
    cout << "Area of t1: " << t1.area() << endl;
    cout << endl;
  
    cout << "Circumference of t2: " << t2.circumference() << endl;
    cout << "Area of t2: " << t2.area() << endl;
    cout << endl;

    //Test of setters and getters
    t1.setSides(5, 12, 13);
    cout << "Updated Triangle t1: " << endl;
    t1.print();
    cout << endl;

    return 0;
  } catch(const invalid_argument& e) {
    cerr << e.what() << endl;
  }

  //Test invalid triangle according to the Triangle Inequality Theorem
  try
  {
    Triangle t3(1, 2, 3);
    cout << "Triangle t3: " << endl;
    t3.print();
    cout << "Is valid: " << (t3.isValid() ? "Yes" : "No") << endl;
    cout << endl;
  } catch(const invalid_argument& e) {
    cerr << e.what() << endl;
  }

  try
  {
    Triangle t4(1, 10, 12);
    cout << "Triangle t4: " << endl;
    time4.print();
    cout << "Is valid: " << (t4.isValid() ? "Yes" : "No") << endl;
    cout << endl;
  }
  catch(const invalid_argument& e)
  {
    cerr << e.what() << endl;
  }
  
}
