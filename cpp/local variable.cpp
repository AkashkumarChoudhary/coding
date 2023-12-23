#include<iostream>
using namespace std ;

class Student {
    public :
    void studentRollNO (){
        int rollNo = 20 ;
        rollNo += 5 ;
        cout << " The rollNo is : " << rollNo ;
    }
};

int main (){
    Student s ;
    s. studentRollNO();
    return 0;
    
}