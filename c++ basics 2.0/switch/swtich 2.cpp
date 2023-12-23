#include<iostream>
using namespace std;

int main(){

    int a;
   cout<< "enter the value of a :  "<< endl;
     cin>> a;
    int b;
    cout<< "enter the value of b :"<< endl;
    cin >> b;

    char op ;
   cout<< "enter operation :"<< endl;
    cin >> op;

    switch (op){
        case  '+' : cout<< (a+b) << endl;
                  break ;
        case '-'  : cout << (a-b) << endl;
                  break;
        case '*'  : cout<< (a*b ) << endl;
                  break ;
        case '/' : cout<< (a/b) << endl ;
                  break;
        case '%'  : cout<< (a%b) << endl;
                  break;
        default : cout << "nothing  "  << endl ;
                                                       
    }

}