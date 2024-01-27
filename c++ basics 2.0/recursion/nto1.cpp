#include<iostream>
using namespace std;

int count(int i , int n){
    if(i <1){
        return 0;

    }
    cout<<i << endl ;
    count (i-1, n);
}

int main(){
    int n ;
     cin>> n;

    int ans = count(n, n);
    cout<< ans<<endl;
}