#include<bits/stdc++.h >
using namespace std;
int main ()
{
    int a =2 , b =3;
    int res =0 ;
    res = (a > b ) && (a== b) ;
    cout<< res << "\n";
    res =( a != b) || ( a >= b );
    cout << res << " \n ";
    res = !(a < b );
    cout << res << " \n" ;
    return 0;
}

 
