#include<iostream>
using namespace std;

int main(){

    //pointer to int is created , and pointing to some garbage address

   // int *p =0;
    //cout << *p << endl;
   /*
    int akash =5;

    int *p =&akash;
     cout<< p<<endl;
     cout<< *p << endl;

    int *ptr = 0;
    ptr = &akash;
    cout<< ptr <<endl;

    cout<<  (*ptr) << endl;

    */

   int num =5;
   int a = num ;;
   a++;a

   cout << num << endl;

   int *p = &num;
   cout << "before "  << num << endl;
   (*p)++ ;
   cout<< "after " << num << endl;;
    //copying a pointer
    int *q= p;
    cout << q << "- " << p << endl;
    cout<< *q << "-" << *p << endl;
     //ijmportant concept
     int i =3 ;
     int *t = &i;
     *t = *t +1;
     cout<< *t << endl;
     cout<< "beforre t" << t << endl;
     t = t +1 ;
     cout<< "after t " << t << endl;
     a 
    return 0 ;


}