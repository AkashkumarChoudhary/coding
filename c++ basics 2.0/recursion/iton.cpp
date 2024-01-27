#include<iostream >
using namespace std;

int count(int i ,int n) {
 if(i > n){
    return 0 ;
 }
 cout<< i <<endl;

count(i+1 , n);
}
int main(){
    int n ;
    cin >> n;
    int ans =  count( 1 , n);
    cout<< ans;

}