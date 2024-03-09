#include <iostream>
using namespace std;
int main()
{
    int temperature;
    cout << "Enter temperature \n";
    cin >> temperature;

    if (temperature < 0){
        cout << "Temperature is freezing ";

     //Returns true if both statements are true

    }else if (temperature >=0 && temperature < 100)  {
        cout << "Temperature is moderate";
    } else {
        cout << "Temperature is Boiling";
    }

// (||) = Returns true if one of the statements is true


// (!) = Reverse the result, returns false if the result is true
 // Ex = !(x < 5 && x < 10)




    }
