#include <iostream>
using namespace std;
int main (){
    int num , sum=0;
    cout << "Input number of terms: ";
    cin >> num;

    for (int i=1 ;i <= num ; i+=2 ){
        sum = sum+i ;
    }  

    cout << "The Sum of Odd Numbers= " << sum;
    

}