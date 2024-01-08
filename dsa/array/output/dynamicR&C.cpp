#include<iostream>
using namespace std;

int main(){
    int row;
    cin >> row;

    int col;
    cin>>col;

    int** arr = new int*[row];  
    for(int i=0;i<row;i++){
    arr[i] = new int [col];
    }
    //creation
    

    //input
    for(int i=0; i<row; i++){
        for(int j=0 ; j<col ; j++){
            cin>> arr[i][j];
        }
    }
  cout<<endl;

    //output
    for(int i=0; i<row; i++){
        for(int j=0 ; j<col ; j++){
           cout<<  arr[i][j];
        }cout<<endl;
    }

    //release memory
    for(int i =0; i< row ; i++) {
        delete [] arr[i];
    }

    //release pointer memory
    delete[] arr;

}