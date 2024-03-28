#include <iostream>
using namespace std;
int main (){
    int num =10 ;
    int first = 0 , second = 1 ;
    int next;
    for (int i= 1 ; i < num ; i++) {
         next = first + second;
        first = second;
        second = next;
       
        cout << next << endl;
    }
}
