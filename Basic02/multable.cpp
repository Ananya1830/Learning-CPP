// Program to print the multiplication table of 29.

#include <iostream>
using namespace std;
int main() {

int num = 29;
int i = 1;
while (i<=10){
    cout << num << " x " << i << " = " << num * i << endl;
    i++;
}
}