#include <iostream>
using namespace std;
int main() {
  int c;
  cout << "Enter the first number \n";
  cin >> c;

  int d;
  cout << "Enter the second number \n";
  cin >> d;

  int e;
  cout << "Enter the third number \n";
  cin >> e;

  int f;
  cout << "Enter the fourth number \n";
  cin >> f;

  int avg = (c + d + e + f) / 4;
  cout << "avg of four numbers \n" << avg;
}