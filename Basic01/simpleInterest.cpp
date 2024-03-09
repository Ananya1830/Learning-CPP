#include <iostream>
using namespace std;
int main()
{
    // simple interest = p*r*t/100

    int p;
    cout << "Enter the principal amount \n";
    cin >> p;

    int r;
    cout << "Enter the rate of interest \n";
    cin >> r;

    int t;
    cout << "Enter the time in months \n";
    cin >> t;

    int simple_int = (p*r*t)/100;
cout << "simple interest is \n" << simple_int ;


}