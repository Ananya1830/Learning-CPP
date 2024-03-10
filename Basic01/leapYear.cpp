// Create a program that takes a year as input and determines if it's a leap year or not.
//  Use logical operators to implement the conditions for a leap year. 
//  (u can check conditions for year to be a leap year)

#include <iostream>
using namespace std;
int main ()
{
    int year;
    cout << "Enter year \n";
    cin >> year ; 

    if ((year % 4 ==0 && year % 100 != 0) || (year % 400 ==0)) {
     cout << year << " is a leap year" ;
    } else {
         cout << year << " is not a leap year" ;
    }
}
