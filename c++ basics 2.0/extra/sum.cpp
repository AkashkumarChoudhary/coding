#include<iostream>
using namespace std ;

int main () {
    int  n ;
    cin >> n  ;
    int sum =0 ;
    int num = 1 ;
    while(num < n) {
        sum = sum + num ;
        num = num +1 ;
     
    }
    cout << "sum " << sum <<endl;

}