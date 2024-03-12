#include<iostream>
using namespace std;

class Student {
    public:
    string name ;
    int age , rollNumber;
    string grade;


};

int main(){
    Student* s = new Student ;
    // (*s).name = "akash";
    //  (*s).age = 21;
    //  (*s).rollNumber = 31;
    // (*s).grade = "A+";
     s->name = "akash";
     s->age = 21;
     s->rollNumber = 31;
    s->grade = "A+";
    

    cout<< s->age << " "<<endl;
    cout<< s->grade << " " <<endl;
    cout<< s->name << endl;
    cout<< s->rollNumber <<endl;


}