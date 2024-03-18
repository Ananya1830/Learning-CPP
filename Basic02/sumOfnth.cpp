#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number \n";
    cin >> number;

    int i = 0;
     int sum =0;
    while (i<=number) {
       sum = sum + i;
       
       i++;
    }
     cout << "The sum is :" << sum;

}