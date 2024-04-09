#include <iostream>
using namespace std;
int main (){
    
    int num ;
    cout << "Enter a number: ";
    cin >> num;

    int first = 0 , second = 1 ;
    int next;

    if (num == 1) {
        cout << first << endl;
         }
         else if (num == 2) {
            cout << second << endl;
         } else {
            
        for (int i= 3 ; i <= num ; i++) {
        next = first + second;
        first = second;
        second = next;
       
    }
    
}
cout << next << endl;
}