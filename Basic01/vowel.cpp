

#include <iostream>
using namespace std;
int main()
{
       
       char alphabet;
       cout << "Enter an alphabet \n" ;
       cin >> alphabet;

       if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
       alphabet =='A' || alphabet == 'E'|| alphabet =='I' || alphabet =='O' || alphabet == 'U'){
        cout << "Alphabet is a vowel";
       } 

      else if ((alphabet >= 'a' && alphabet <='z') || (alphabet >= 'A' && alphabet <= 'Z')) {
       cout <<  "Alphabet is a consonant";
      } else {
        cout <<  "Invalid output";
      }
       
      
}