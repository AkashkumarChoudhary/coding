#include<iostream>
using namespace std;

int main () {
   /* int arr[10] = {6 , 71 , 83 , 92 , 0 , 4 ,  5 , 2 , 12} ;

    cout << "adddresss of memory of block is is  " << arr << endl;
    cout << arr[0 ] <<endl;
    
    cout << "adddresss of memory of array is add " <<  &arr[0] << endl;
    cout<< "4th " << *arr << endl;
    cout<< "5th " << *arr + 1 << endl;
        cout<< "7th " << *arr +3 << endl;
    cout<< "5th " << *(arr + 1) << endl;
    cout<< "4th " << *(arr) + 1 << endl;
    cout<< "5th " << 3[arr] << endl;
 */
 
    
    /*int temp [10] = {3 , 6};
    cout<< sizeof(temp)<< endl;
   cout<<  "1st" << sizeof( *temp)<< endl;
   cout<<  "2st" << sizeof( &temp)<< endl;



    int * ptr = &temp[0] ;
    cout<< sizeof(ptr) << endl;
    cout<< sizeof(*ptr) << endl;
     cout<< sizeof(&ptr) << endl;

*/


   /* int a [ 20 ] = { 1, 2,3 ,4 ,5,6 } ;

    cout << " --> " << &a[0] << endl;
    cout <<   &a << endl;
    cout <<   a << endl;
 cout <<   a[3] << endl;
    int *p = &a[0] ;
    cout<< p << endl;
    cout<< *p << endl;
    cout<< "-->" << &p << endl; 
*/



int arr[10] ;

//error
//arr = arr+1 ;

int *ptr =&arr[0];
cout<< ptr << endl;
ptr = ptr +1 ;
cout<< ptr <<endl;





    return 0;
    
}