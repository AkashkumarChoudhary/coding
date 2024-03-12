#include<iostream>
#include <string>
using namespace std ;

class Customer {
   
    string name;
    int account_number , balance ;
    int *roi;
 
    // Default constructor
 public :
    Customer ()
    {
        name = "rohit";
        account_number = 5;
        balance = 100;
        roi = new int [100];
    }
    
    // Parameterized Contrcutor
    // Customer (string a , int b, int c)
    // {
    //     name = a ;
    //     account_number = b ;
    //     balance = c;
    // }


    Customer (string name, int account_number, int balance)
    {
       this->name = name ;
        this->account_number = account_number ;
       this->balance =balance;
    }

// Constructor OverLoading
 Customer (string a , int b)
 {
    name = a;
    account_number = b;
    balance =50;
 }
//  Inline Constructor : Ye parametrized ke jagah kaam kar sakta hai

// inline Customer (string a , int b , int c) : name(a),account_number(b),balance(c)
// {
    
// }


void display ()
    {
        cout<< name << " "<<  account_number  << " " << balance << endl;
    }

  Customer (Customer &B)
  {
    name = B.name;
    account_number=B.account_number;
    balance=B.balance;
  }  

};
int main (){
    Customer A1;
    Customer A2("akash" , 21 , 1000);
    Customer A3("Mohit ", 23);
    A1.display ();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();
}