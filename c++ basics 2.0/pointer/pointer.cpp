#include<iostream>
using namespace std;

int main (){
    int akash =5;

    cout<< "value of akash is :" << akash << endl;
   // addres of operator -&
   
  int *ptr= &akash ;
    cout << "address of ptr " << ptr << endl;
    cout << "value is : " << *ptr << endl;
    cout << "size of akash " << sizeof(akash) << endl;
    cout<< "size of ptr " << sizeof(ptr) << endl;
  cout<< &akash << endl;

}