#include <iostream>
#include <math.h>
using namespace std;
int main() {

  float radius;
  cout << "Enter the radius of sphere: \n" ;
  cin >> radius;


  float volume = (4.0/3.0)* M_PI* pow(radius,3);
  cout << "Volume of sphere :" <<volume;
}

// In C++, M_PI is a predefined constant representing the mathematical constant π (pi).
//It's defined in the <cmath> header file and is part of the C++ standard library.