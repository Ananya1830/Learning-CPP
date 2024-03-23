// wap where user has to put numbers between 1 to 7 and 
// print the day of the week according to the user input number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch(num) {
        case 1:
        cout << "Day is Sunday";
        break;
        case 2:
        cout << "Day is Monday";
        break;
        case 3:
        cout << "Day is Tuesday";
        break;
        case 4:
        cout << "Day is Wedneday";
        break;
        case 5:
        cout << "Day is Thursday";
        break;
        case 6:
        cout << "Day is Friday";
        break;
        case 7:
        cout << "Day is Saturday";
        break;
        default:
        cout << "Enter number between 1-7";
        break;
    }

}
