#include<bits/stdc++.h>
using namespace std ;

// Return type of function is void because value is not returned.
void is_even(){
    int num=4;
    if(num%2==0){
        cout<<num<<" is Even number.";
     }else{
        cout<<num<<"is Odd number.";
     }
} 
 int main(){
    //No argument is passed to is_even()
    is_even();
    //is_even()does not returns any vaqlues.
    return 0 ;
 }