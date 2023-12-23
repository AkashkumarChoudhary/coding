#include <iostream>
using namespace std ;
int main (){
    int  n ;
    cin  >> n ;
    int fac =1 ;
    int num =1 ;
    while (num <= n ) {
        fac = fac*num ;
        num = num +1 ;

    }
    cout << "factorial " << fac << endl;

}