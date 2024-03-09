#include <cmath>
#include <iostream>
using namespace std;
int main() {
  float height;
  cout << "Enter height of a triangle: \n";
  cin >> height;

  float base;
  cout << "Enter base of a triangle: \n";
  cin >> base;

  float area = (height * base) / 2;
  cout << "area of triangle \n" << area;
}