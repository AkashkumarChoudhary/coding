#include<iostream>
using namespace std;
  void selection_sort(int arr[] , int n){
    for(int i=0; i<n-1 ; i++){
        int mini =i;
        for(int j =i ; j< n ; j++){
            if(arr[j] < arr[mini]){
                mini =j;
            }
        }
        int temp = arr[mini];
         arr[mini]= arr[i];
         arr[i] = temp; 
    }
 }
int main(){
    int n ;
    cout << "Enter the number of elements: ";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " elements:\n";
     for( int i =0; i<n ; i++){
        cin>> arr[i];
     }
        selection_sort(arr, n);

        for(int i=0; i<n ; i++){
          cout<< arr[i] << " ";
     }
     return 0;
}