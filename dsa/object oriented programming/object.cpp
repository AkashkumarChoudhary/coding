#include<iostream>
using namespace std ;

class Student {
    public:
 string name;
 int age, rollNumber;
 string grade;
};

int main(){
    Student s1;
    s1.name = "akash";
    s1.age = 21 ;
    s1.rollNumber = 12;
    s1.grade = 'a+';

    cout<< s1.rollNumber << " ";
}