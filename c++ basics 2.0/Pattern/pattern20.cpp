#include<iostream>
using namespace std;
int main() {
    int  n ;
    cin >>n;

    int i=1;
    while(i<=n) {
        //first print spce (1st triangle)
         int j=1;
         while(j<=n-i+1) {
            cout<< j ;
           j++;

         }
       //print 2nd triangle
        int star =i-1;  

        while(star){
              
            cout<< "*" ;
    
          star-- ;

        }

        //print 3rd triangle
         int k=i-1;
        while(k){
            cout << "*" ;
            k--;
        } 
        //print4th triangle
        int m = 1;
        while (m <=n){
            cout<< m+n-j;
            m++ ;

        }
        cout<< endl;
        i++ ;

    }

} 