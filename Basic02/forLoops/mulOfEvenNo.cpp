#include <iostream>
using namespace std;
int main (){
    int num , multiple=1;
    cout << "Input number of terms: ";
    cin >> num;

    for (int i=2 ;i <= num ; i+=2 ){
        multiple = multiple*i ;
    }  

    cout << "The multiple of Even Numbers= " << multiple;
    

}