#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number \n";
    cin >> number;

    int i = 1;
     int multiplication =1;
    while (i<=number) {
       multiplication = multiplication * i;
       
       i++;
    }
     cout << "The multiplication is :" <<multiplication;

}