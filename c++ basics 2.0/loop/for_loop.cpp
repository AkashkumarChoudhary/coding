#include <iostream>
using namespace std;
int main(){

    //int n ;
    cout<< "enter th value of n  : " << endl ;
    //cin >> n ;

    cout << "printing count from  1 to n"<< endl;
   /* for (int i =1 ; i <= n ; i++){
        cout<<i <<endl;
    }*/


// second type to use for loop without writing 
//intialisation, condition in bracket
   /* int i = 1;

    for( ; ; ){
      if (i<=n){
        cout<<i << endl;
      }
      else{
        break;
      }
      i++;

    }*/




    //multiple variable initialisation
    for (int a =0, b = 1 , c=2 ; a>=0, b>=1 , c>=2 ; a-- , b-- , c--){
      cout<< a<< " " << b << " " << c << "" << endl;
    }

}