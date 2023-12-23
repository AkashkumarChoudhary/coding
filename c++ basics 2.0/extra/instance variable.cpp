/*differemve between local and instance variable in c++
In C++, local variables and instance variables (also known as member variables) are both types of variables
 that serve different purposes and have different scopes within a program.

Local Variables:

Scope: Local variables are declared within a specific block of code (such as a function) and are only accessible within that block.
Lifetime: The lifetime of a local variable starts when the block in which it is declared is entered and ends when the block is exited. 
In the case of functions, local variables are created when the function is called and destroyed when the function exits.
Access: Local variables are accessible only within the block where they are declared. They are not accessible from outside that block.
Initialization: Local variables are not automatically initialized with default values. You need to explicitly assign a value before 
using them to avoid undefined behavior.
Storage: Local variables are usually stored on the stack memory.
Instance Variables (Member Variables):

Scope: Instance variables are declared within a class and are associated with instances (objects) of that class. 
They are accessible within the entire scope of the class.
Lifetime: The lifetime of an instance variable is tied to the lifetime of the object it belongs to.
 It exists as long as the object exists.
Access: Instance variables can be accessed through the object of the class. 
They are accessible from both within the class's member functions and from outside the class (if they are public or protected).
Initialization: Instance variables can be initialized with default values using constructors. If not explicitly initialized,
 they may be initialized to default values based on their data types.
Storage: Instance variables are usually stored on the heap memory when objects are dynamically allocated, 
and they are stored within the object's memory space.
In summary, the key differences between local variables and instance variables lie in their scope, lifetime, access, 
initialization, and storage. Local variables are confined to a specific block and have a limited lifetime, 
while instance variables belong to a class and exist as long as the associated object exists, with wider accessibility within the class.*/
#include<iostream>
using namespace std ;

class Student {
   
    int rollNo;
     public :
    void set_data(){
        rollNo = 20;

    }
    void display(){
        cout << " The rollNo is :" << rollNo;
    }
};
  /*This section defines a class named Student:

It has a private integer member variable called rollNo, which can only be accessed within the class itself.
The public access specifier indicates that the following member functions are accessible from outside the class.
The member functions:

set_data() is a public member function that sets the value of the private member variable rollNo to 20.
display() is another public member function that uses the output stream cout to print the message
 "The rollNo is: " followed by the value of rollNo.*/
  int main(){
    Student s;
    s.set_data();
    s.display();
    return 0;
  }
  /*In the main() function:

An object of the Student class named s is created.
The set_data() function is called on the s object, setting the value of rollNo to 20.
The display() function is called on the s object, which prints "The rollNo is: 20" to the standard output.
The return 0; statement indicates that the program has executed successfully and returns a status of 0 to the operating system.
Overall, this code demonstrates the concept of encapsulation,
 where the private member variable rollNo can only be accessed and
  modified through the public member functions set_data() and display().*/