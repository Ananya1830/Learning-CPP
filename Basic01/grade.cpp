#include <iostream>
using namespace std;
int main()
{
  int marks;
  cout << "Enter marks \n"  ;
  cin >> marks;

  if (marks>= 90 && marks <=100) {
    cout << "Grade is O";
  } else if (marks>= 80 && marks <=89){
    cout << "Grade is E ";
} else if (marks>= 70 && marks <=79) {
    cout << "Grade is A ";
} else if (marks>= 60 && marks <=69) {
    cout << "Grade is B ";
} else if (marks>= 50 && marks <=59) {
    cout << "Grade is C "; 
} else if (marks>= 40 && marks <=49) {
    cout << "Grade is D ";
} else if (marks>= 30 && marks <=39) {
 cout << "Grade is  E"; 
} else {
  cout << "Grade is F";  
}
}