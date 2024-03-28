#include <iostream>
using namespace std;
int main (){
    int num;
    int sum = 0;
    
    cout << "Enter number: ";
    cin >> num;

    int total = num /2;

    for (int i= 1 ; i<= num ; i++) {
        sum = sum + i + total ;
       
        
    }
    cout << "The sum is :" << sum << endl;
}