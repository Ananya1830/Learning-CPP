// Create a program that checks if a given number is between 10 and 20 (inclusive) using the logical AND operator.
// Print "Within range" if it's within the range, otherwise print "Out of range.

#include <iostream>
using namespace std;
int main ()
{
    int number;
    cout << "Enter number \n";
    cin >> number;

    if (number >= 10 && number <= 20 ) {
        cout << "Within Range";
    } else {
      cout << "Out of Range";  
    }
}