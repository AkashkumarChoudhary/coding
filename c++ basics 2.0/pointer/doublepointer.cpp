#include<iostream>
using namespace std;

int main ()
{    int  i = 5;

    int *p = &i ;
    int **ptr= &p;


    cout << i << endl;
    cout<< *p << endl;
    cout<< **ptr<<endl;


    cout<< &i<<endl;
    cout<< p << endl;
    cout<< *ptr <<endl;


    cout<< &p  <<endl;
    cout<< ptr << endl;
    

    return 0;

}