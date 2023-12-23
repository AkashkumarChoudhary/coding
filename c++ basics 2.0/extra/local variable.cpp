#include<iostream> 
/*This line includes the input-output stream header file,
 which allows you to use the input and output stream functionalities provided by C++*/
using  namespace std;
/*This line is a using directive that allows you to use names from the std namespace without explicitly writing std:: 
\before them. The std namespace contains many standard C++ library functions and objects.*/

class Student {
    public:
    
    void studentRollNO(){
        int rollNo = 20;
        rollNo += 5;
        cout << "The rollNo is : " << rollNo ;
    }
};
/*This section defines a class named Student. The class has a public member function called studentRollNo(). 
Inside this function:

An integer variable rollNo is declared and initialized to 20. This variable is local to the studentRollNo() function,
 meaning it only exists within the scope of this function.
The value of rollNo is incremented by 5.
The output stream cout is used to print the message "The rollNo is: " along with the value of rollNo.*/

int main (){
    Student s ;
    s.studentRollNO();
    return 0;
}
/*This is the main() function, which is the entry point of the program:

An object of the Student class named s is created.
The studentRollNo() function is called on the s object.
The return 0; statement indicates that the program has executed successfully and returns a status of 0 to the operating system.
In summary, this code defines a class Student with a member function studentRollNo(),
 which calculates and displays a modified roll number.
In the main() function, an instance of the Student class is created, and the studentRollNo() function is invoked on that instance.
 The output of the program will be "The rollNo is: 25" because the initial value of rollNo is 20 and it's incremented by 5.*/