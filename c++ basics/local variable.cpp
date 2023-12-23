#include<iostream>
using namespace std;
class Student {
    public:
    void studentRollNo (){
        int RollNo = 20; // local varible rollno
        RollNo += 5;
        cout<< " The RollNo is: " << RollNo;

    }

};
int main(){
    Student s ;
    s.studentRollNo();
    return 0;
}