// Write a program that takes three integers as input and checks if they form a
//  Pythagorean triplet (a^2 + b^2 = c^2) using the logical OR operator.
//  Print "Pythagorean triplet" if the condition is met, otherwise print "Not a Pythagorean triplet".

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    
    
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
   
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        cout << "Pythagorean triplet \n";
    } else {
        cout << "Not a Pythagorean triplet \n";
    }
    
    
}