 #include<iostream>
 using namespace std;

 int main(){
    
    int arr [ 6] = { 2, 3, 4, 5, 6} ;
    char ch[6] = "abcde" ;
    
    cout<< arr<< endl;
    cout<< ch<<endl;

     char *c = &ch[0] ;
     cout << c  << endl;

    
    char temp ='z';
    char *a =  &temp;
    cout << a  << endl;


    return 0;

 }