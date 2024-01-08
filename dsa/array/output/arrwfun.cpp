 #include<iostream>
 using namespace  std;
     

void printArray (int arr[] , int size ){
     cout<< "print the array " << endl;
   //print the array
    for (int i=0 ; i< size ; i++){
        cout<< arr[ i] << " " ;   
    }
     cout<<"printing DONE " <<endl; 
}

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
    printArray (third , 15);
     int thirdsize = sizeof(third)/sizeof(int);
    cout<< " size of third is " << thirdsize << endl;

    //initialising all location with 0
     int four[15] = {0} ;
     n = 15 ;
     printArray(four , 15);




//initialising all location with 1(not possible with below line)
     int fifth[15] = {1} ;
     n = 15 ;
     printArray(fifth , 15);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<< " size of fifth is " << fifthsize << endl;


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
    cout <<endl;


    //accessing
   // for (i=0 ; i< size ; i++){
       
   // }

   char ch [5] = {'a','b','c','d','e'};
   cout << ch[2] <<endl;

     cout<< "print the array " << endl;
   //print the array
    for (int i=0 ; i<5 ; i++){
        cout<< ch[ i] << " " ;   
    }
     cout<<"printing DONE " <<endl; 


double firstdouble[6];
float firstfloat[7];
bool boolean[8];

    return 0;
 }
 
 