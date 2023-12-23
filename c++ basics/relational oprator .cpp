#include<iostream >
using namespace std;
int main () {
    int a = 3 , b = 5 ;
    int res = 0 ;
    res = a == b ;
    cout << " Is a == b ? " << res << "\n";
     res = a!= b ;
      cout << " Is a != b ? " << res << "\n";
       res = a > b ;
        cout << " Is a > b  ? " << res << "\n ";
         res = a < b  ;
         cout << " Is  a < b  ? " << res  << " \n " ;
        res = a >= b ;
         cout << " Is a >= b ? " << res << " \n" ;
        res = a <= b ;
        cout << " Is a <= b ? " << res << "\n" ;
         return 0;
}