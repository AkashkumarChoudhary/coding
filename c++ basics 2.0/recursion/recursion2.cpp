#include<iostream>
using namespace std;


int power(int n){
    //base case
    if (n==0)
    return 1;
     //recursive relation
    int small = power(n-1) ;
    int big =  2* small;
    return  big;

    //recursive relation 2
    // return 2* power(n-1);

}

int main () {
    int n;
    cin>>n;
    cout<< power(n) << endl;
    
    
}