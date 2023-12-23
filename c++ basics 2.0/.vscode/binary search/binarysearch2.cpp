#include <iostream > 
using namespace std ;
 
 int FirstOccu(int arr[] , int n , int key){
    int s = 0 , e = n -1 ;
    int mid = s +(e-s)/2 ;
    int ans =-1 ;

    while (s<=e){
        if (arr[mid]== key ){
            ans = mid;
            e = mid -1 ;

        }
        else if (key > arr[mid ] ){ // right mai jao
            s= mid +1 ;

        }
        else if (key <arr[mid]) {
            e =mid -1;
        }
        mid = s + (e-s)/2;
    }
    return  ans ;


 }

 int lastOccu(int arr[] , int n , int key){
    int s = 0 , e = n -1 ;
    int mid = s +(e-s)/2 ;
    int ans =-1 ;

    while (s<=e){
        if (arr[mid]== key ){
            ans = mid;
           s = mid +1 ;

        }
        else if (key > arr[mid ] ){ // right mai jao
            s= mid +1 ;

        }
        else if (key <arr[mid]) {
            e =mid -1;
        }
        mid = s + (e-s)/2;
    }
    return  ans ;


 }
 
int main(){
    int akash[5] = {1, 2 , 3 , 3 , 5} ;
    
    cout << "first occurence of 3 is at index" << FirstOccu(akash , 5 , 3) << endl;
    cout << "last occurence of 3 is at index" << lastOccu(akash , 5 , 3) << endl;
}
