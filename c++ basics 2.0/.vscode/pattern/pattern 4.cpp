#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
     int train =1 ;
     while (train <= n ){
        int col = 1;
        while(col <=train ){
            cout<< train;
            col = col+ 1 ;
        }
        cout<< endl;
        train = train +1 ;

     }
}