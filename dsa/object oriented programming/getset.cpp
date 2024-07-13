#include<iostream>
using namespace std;

class Student
{
    private:
    string name , grade;
    int age , rollNumber;
    // Function getter and setter

    public:
    void setname(string s){

         if(s.size()== 0){
            cout<<"invalid name:";
            return ;
         }
        name = s;
    }
    void setage(int x){
        age = x;
    }
    void setgrade(string y){
        grade = y;
    }
    void setrollNumber(int s){
        rollNumber = s;
    }

    void getname(){
        cout<< name<<endl;
    }
    int getrollNumber(){
        cout<< rollNumber<<endl;
    }

    string getgrade(int pin){
        if( pin ==123)
        return grade;
         
         else
         return " ";

    }
};


int main(){
    Student s1;
    s1.setname ("akash");
    s1.setage  (21) ;
    s1.setrollNumber(12);
    s1.setgrade ("a+");
    s1.getname();
    s1.getrollNumber();
   cout<< s1.getgrade(123)<<endl;

}

// 13 /07
