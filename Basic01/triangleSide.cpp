// WAP take 3 inputs from the use user and consider the inputs as the length of the sides of the triangle , 
// if the sum of any two sides is greater than the third side, print "Valid Triangle" ,
// otherwise print invalid triangle

#include <iostream>
using namespace std;
int main () {
    int side1 , side2 , side3 ;
    cout << "Enter first side \n";
    cin >> side1;

    cout << "Enter second side \n";
    cin >> side2;

    cout << "Enter third side \n";
    cin >> side3; 

    if (side1 + side2 > side3 && side2 + side3 > side1 && side2 + side1 > side3 ) {
        cout << "Valid Triangle \n";
    } else {
       cout << "Invalid Triangle \n"; 
    }
    

}
