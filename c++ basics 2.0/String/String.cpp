#include<iostream>
using namespace std;

int main(){
     char arr[] = { 'a', 'p','p','l', 'e'};
    cout<< arr;
    // char arr[10] ;
    // cin>>arr;
    // arr[2] = '\0';
    // cout<<arr;

    // string s;
    // getline(cin,s);
    // cout<<s; 
    // cout<<s.size();

    // string s1 = "rohit" ,s2= "akash";
    // string s3 = s1+ s2;
    // string s3 = s1.append(s2);
    // s1.push_back('p');
    // s1.pop_back();

    // cout<<s1;
    // cout<<s3;

    // string s = "akash is a \"good\" boy";
    // string s = "\\0";
    // cout<<s;

    // reverse of an string
    string s = "rohit";
    int start = 0 ,end = s.size()-1;
    while(start < end){
        swap(s[start], s[end]);
        start++ , end--;
    }

    cout<<s;
    int size = 0;
    while(s[size]!= '\0'){
        size++;
    }
    cout<<endl;
    cout<< size<< " ";

    string s2 = "naman";
    start = 0 ; end = s2.size()-1;
    while(start<end){
        if(s2[start] != s2[end]){
            cout<< " it is not a pallindrome";
            return 0;
        }
        start++, end--;
    }
    cout<< "it is a pallindrome";

}