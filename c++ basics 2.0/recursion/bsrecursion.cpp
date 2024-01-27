#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

bool BinarySearch( int arr[], int s , int e , int k){
    //base case
    //elememnt not found
    if(s>e)
    return false;
   
    int mid =(s+e)/2;
    cout<< "Value of mid : " << arr[mid] << endl;
    //element found
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid ]  < k){
        return BinarySearch(arr, mid+1, e , k);
    }
    if(arr[mid]> k){
        return  BinarySearch (arr, s , mid-1 , k);
    }

}

int main(){
    int arr[5]= {2, 4, 5, 6 ,8};
    int size =5;
     int key = 8;
   cout<< "binary search " << BinarySearch(arr ,0 ,5, key) << endl;
}

int main(){
    int arr[5]= {2, 4, 5, 6 ,8};
    int size =5;
     int key = 8;
   cout<< "binary search " << BinarySearch(arr ,0 ,5, key) << endl;
}