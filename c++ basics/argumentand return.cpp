#include<bits/stdc++.h>
using namespace std;
// Return type of function is bool so it either return a true or false.
bool is_even(int num)
{
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    //number as an argument is passed to is_even()
    int num=4;
    bool flag;

    flag = is_even(num);
    if(flag)
    {
        cout<<"Num is even number";

    }
    else{
        cout<<"Num is odd number";
    }
    return 0;
}