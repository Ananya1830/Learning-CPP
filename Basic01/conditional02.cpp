#include <iostream>
using namespace std;
int main(){
    // to print wheather the number is even or odd
    int a ;
    cout << "Enter a number \n";
    cin >> a;

//In summary, '=' is used for assignment, while '==' is used for comparison. 

    
  //  if (a%2==0){
   //     cout << "Entered number is even"; }

    //if (a%2==1){
    //    cout << "Entered number is odd";    }


    // another way to do is by using else statement : it used when the upper or previous statement is false.


  /*  if (a%2==0) {
        cout << "Entered number is even" ;

    } else {
        cout << "Entered number is odd";
    } */

    if (a%2==1) {
        cout << "Entered number is odd" ;

    } else {
        cout << "Entered number is even";
    }

}