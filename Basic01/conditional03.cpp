#include <iostream>
using namespace std;
int main(){

    // enter your age wheather you are eligible for voting or not.

    int age;
    cout << "Enter your age \n";
    cin >> age;

    if (age>=18) {
        cout << "You are eligible for voting";
    } else { 
 cout << "You are not eligible for voting";
    }


}