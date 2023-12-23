#include<iostream>
using namespace std ;

int BinarySearch (int arr[] , int size , int key ){
    int start = 0 ;
    int end = size-1;
    int mid = start + (end -start)/2;

    while (start <= end )
    {
        if (arr[mid] == key ){ 
            return mid ;

        }
        else if (key > arr[mid]){
            start = mid +1;
        }
        else {
            end = mid - 1 ;
        }
        mid = start + (end -start)/2;

    }
    return -1;

}
int main() {
    int even [6] = {5, 11, 13 ,16, 19 , 27};
    int odd[5] = { 3, 8 , 11, 14 ,16};

    int evenIndex = BinarySearch(even , 6 , 13);
    cout<< " Index of 13 is "<< evenIndex  << endl;

    int oddIndex = BinarySearch(odd , 5 , 16);
    cout<< "Index of odd 16 is  " << oddIndex << endl;

    return 0 ;
}