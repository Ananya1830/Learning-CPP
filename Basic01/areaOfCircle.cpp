#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float pi =  3.141;

  int radius;
  cout << "Enter the radius of circle \n";
  cin >> radius;

  float area = pi* pow(radius, 2);
  cout << "area of a circle \n" << area ;
  
}
