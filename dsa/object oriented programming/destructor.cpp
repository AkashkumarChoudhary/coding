#include<iostream>
using namespace std;

class Customer 
{
    string name ;
    int * data ;

    public :
    Customer(){
        name = "4";
        cout<< "Constructor is " << name << endl ;

    }

    Customer(string name)
    {
        this->name = name ;
         cout<< "constructor is " << name << endl;

    }

  ~ Customer ()
  {
    cout<< "Destructor is  " << name << endl;

  }  

};


int main (){
    Customer A1("1") ,A2("2"),A3("3");
    Customer *A4 = new Customer;
    delete A4;

}