#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number \n";
    cin >> number;

   // if (number%2==0 && number%3==0) {  // we can also write if (number%6==0)
    if (number%6==0) {
        cout << "Number is divisible by both 2 & 3";
    } else if (number%2==0) {
        cout << "Number is divisible by 2";
    } else if (number%3==0) {
        cout << "Number is divisible by 3";
    } else {
        cout << "Number is neither divisible by 2 nor 3";
    }
}