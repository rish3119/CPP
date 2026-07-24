#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;

int main() {
    string shape;
    getline(cin, shape);
		double Area = 0;

    // Read measurements and calculate area
  
  if (shape == "rectangle") {
    double height, width;
    cin >> height >> width;
    Area = height * width;
    
  }
  else if (shape == "square") {
    double side;
    cin >> side;
    Area = side * side;
    
  }
  else if (shape == "triangle") {
    double height, base;
    cin >> height >> base;
    Area = base * height * 0.5;
  }
  else if (shape == "circle") {
    double radius;
    cin >> radius;
    Area = M_PI * radius * radius;
  }
  
  else {
  cout << "Out of scope" ;
  }
  
  cout << "Area: " << fixed << setprecision(2) << Area << endl;

    // Print the area
    return 0;
}
