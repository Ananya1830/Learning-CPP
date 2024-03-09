// whether the entered no. is +ve or -ve.

#include <iostream>
using namespace std;
int main()
{
  /*  int number;
    cout << "Enter a number \n" ;
    cin >> number;

    if (number>=0) {
        cout << "Entered number is positive";
    } else {
        cout << "Entered number is negative";
    }*/

float number;
    cout << "Enter a number \n" ;
    cin >> number;

    if (number==0) {
        cout << "Entered number is neither positive nor negative";
    } else if(number>0) {
        cout << "Entered number is positive";
    } else {
        cout << "Entered number is negative";
    }

}