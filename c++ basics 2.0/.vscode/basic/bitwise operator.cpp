#include<iostream>
using namespace std ;
int main(){


    int p =3;
    int q = 5;

    cout<< "p&q" << (p&q) << endl;
    cout<< "p|q" << (p|q )<< endl;
    cout<< "~p" << ~p << endl;
    cout <<" p^q" << (p^q) << endl;\

    cout<< (17>>1) <<  endl;
    cout << (17 >> 2) <<  endl;
    cout << (19<< 1 ) << endl;
    cout  << (21<< 2 ) << endl;
    


    int i =8;
    cout << (i++) << endl;
    //i=8  i = 9
    cout<< (++i ) << endl;
    //i =10
    cout<< (i--)<< endl;
    // i = 10 i = 9
    cout<< (--i) << endl;
    //i =8

 }