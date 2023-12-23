#include<iostream>
using namespace std;
int main (  ) {
    //for integer input and output
    int num ; //Integer number 
    cout << " Enter a random number :" ;
    cin >> num ; // Taking integer input 
    cout << "\n The number you selected is : " << num ; // printing output 
    //for float input and output 
    float flt ;
    cout << "\n Enter a random float number : " ;
    cin >> flt ;
    cout<< " \n  The float you selected is :" << flt ;
    // for string input and output 
    string name ;
    cout<<"\n Enter your name :";
    cin>> name;
    cout<< "\n Your name is :" << name ;
    // for array input and output
    int arr[5] ;
    cout<< " \n Enter the elements of the array : " ;
    for ( int i =0 ; i< 5 ; i++) {
        cin >> arr[i] ; // taking input of an array
    }
    cout << " The elements of array are : " ;
    for (int i =0 ; i< 5 ; i++ ) {
        cout << arr[i] << " "; // printing output 
    }
    return 0;
}