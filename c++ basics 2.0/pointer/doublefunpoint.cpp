#include<iostream>
using namespace std ;

void update(int **p2) {
    // p2 = p2+1 ;
    // did no change

   // *p2 = *p2+1;
  // it change the value of p 

  **p2 = **p2 +1;
  
}

int main (){

    int i =5 ;
    int *p = &i ;
    int **p2 = &p;
    

     cout<< "before " << i << endl;
     cout << " before<< " << p << endl;
     cout<< "before" << p2 << endl;
     update(p2) ;
     
     cout<< "after " << i << endl;
     cout << " after<< " << p << endl;
     cout<< "after" << p2 << endl;
     return 0;

}

