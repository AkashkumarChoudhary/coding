#include<iostream>
using namespace std;
int main() {
    int  n ;
    cin >>n;

    int i=1;
    while(i<=n) {
        //first print spce (1st triangle)
         int space = n-i;
         while(space) {
            cout<< " " ;
            space--;

         }
       //print 2nd triangle
        int j=1 ;  

        while(j<=i){
              
            cout<< j ;
    
            j++ ;

        }

        //print 3rd triangle
        int k=i-1;
        while(k){
            cout << k ;
            k--;
        }
        cout<< endl;
        i++ ;

    }

}