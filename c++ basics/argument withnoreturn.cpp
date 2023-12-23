#include<bits/stdc++.h>
using namespace std;
// return type of function is void so it will not return any value.
void is_even(int num){
    if(num%2==0){
        cout<<"Num is even number";
    }else{
        cout<<"Num is odd number";
    }
}

int main(){
    //Number as an argument is passed to is_even()
    int num=4;
    is_even(num);
    return 0;
}