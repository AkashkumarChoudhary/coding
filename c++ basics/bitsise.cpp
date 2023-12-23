#include<bits/stdc++.h>
using namespace std ;
int main()
{
    // a = 5 (00000101) , b = 9 ( 00001001)
    int a = 5 , b = 9;
    // the results is 00000001
    cout<< "a = " << a << " , " << " b = " << b << endl ;
    cout << " a & b = " << (a & b) << endl ;
    // the  result is 00001101
    cout<< "a |b =" << (a|b) << endl;
    // the result is 00001100
    cout << " a^ b= "<< (a^b) << endl;
    // the result is 11111010;
    cout << " ~ ("<< a << ")=" << (~a)<< endl;
    // the rsult is 00010010
    cout << "b<< 1"<< "="<< (b<<1)<< endl;
    // the result is 000000100
    cout << "b>> 1" << "="<< (b>>1) << endl;
    return 0; 
}