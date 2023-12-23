#include<bits/stdc++.h>
using namespace std ;
// Return type of function is bool so it will either return true or false.
bool is_even(){
    int num=4;
    if(num%2==0){
        return true;
    } else{
        return false;
    }
} 
 
int main (){
    //no argument is pssed to is_even()
    bool ans;
    ans = is_even();
//is_even return the boolean value.
if(ans){
    cout<< " Num is even number ";

}else{
    cout<< "Num is  odd number";
}
return 0;
}