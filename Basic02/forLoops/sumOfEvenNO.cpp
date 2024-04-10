#include <iostream>
using namespace std;
int main (){
    int num , sum = 0 ;
    cout << "Input no of terms: ";
    cin >> num;

    for (int i= 2 ; i <= num ; i+=2){
        sum = sum + i;
    }

    cout << "Sum of even numbers" << sum;
}