#include "Triangle.h"
#include "test_util.h"

int main() {

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
}
