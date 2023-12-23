 #include<iostream>
 using namespace  std;
 int main(){

    //declare
    int num[15];

    //accessing
    cout<< "Value at 14 index :" << num[14]<<endl;
    
    //initialising an array
    int second[3]={3,6,9};
    //accesssing an element
     cout<< "Value at 2 index :" << second[2]<<endl;


     
    

    //initialising using loop
    int third[15] = {4, 8} ;
    int n = 15 ;
    cout << "printing the array " << endl;

    //print the array
    for (int i=0 ; i< n ; i++){
        cout<< third[ i] << " " ;   
    }
     cout<< endl; 





    //initialising all location with 0
     int four[15] = {0} ;
     n = 15 ;
    cout << "printing the array " << endl;

    //print the array
    for (int i=0 ; i< n ; i++){
        cout<< four[ i] << " " ;   
    }
    cout<< endl; 





//initialising all location with 1(not possible with below line)
     int fifth[15] = {1} ;
     n = 15 ;
    cout << "printing the array " << endl;

    //print the array
    for (int i=0 ; i< n ; i++){
        cout<< fifth[ i] << " "  ;

    }
    cout<< endl; 







 // initialising all location with 1
    int size =10 ;
    int val =1;
    //array declare 
    int arr[size];
    int i ;
    // initialise
    for (i=0 ; i< size ; i++){
        arr[i] =val ;
        cout   << arr[i] << " ";
    }

    //accessing
   // for (i=0 ; i< size ; i++){
       
   // }
    
    return 0;
 }
 
 