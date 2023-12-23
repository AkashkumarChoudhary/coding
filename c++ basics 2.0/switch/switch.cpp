#include<iostream>
using namespace std;
  
  int main (){
    char ch = '1';
    int num =1 ;
    cout << endl;

    switch (ch){
        case 1 : cout<< "first person :" << endl;
        break;
        case '1' : switch (num){ 
       case 1 : cout<< "second person name: " << ch << endl;
        }
        break ;

    
    default : cout<< "good person " << endl;

  }
  cout<<endl;
  return 0 ;
      
  }