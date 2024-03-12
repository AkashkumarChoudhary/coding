#include<iostream>
using namespace std;


// Implementation of stack

class Stack {
    int *arr ;
    int size;
    int top;

    public:

    // constructor
    Stack(int s){
        arr = new int [s];
        size = s; 
        top = -1 ;
    }
//   push
  void push (int value){
    if(top == size -1){
        cout<< "stack overflow \n";
    }
    else{
        top++;
        arr[top]= value;
        cout<< "pushed " << value << " into the stack\n"; 
    }
  }
// pop

void pop (){
    if(top == -1){
        cout<< "stack underflow" << endl;
    }
    else{
        cout<< "popped "<< arr[top] << " from the stack"<<endl; 
        top--;
    }
}
// peek
int peek(){
    if(top == -1){
        cout<< "stack is empty" << endl;
    }
    else {
        return arr[top];
       
    }
}
// Isempty

bool IsEmpty ()
{
    return top ==-1;
}
// IsSize
int IsSize(){
    return top +1;
}

};


int main(){

    Stack S(5);
    S.push(3);
    S.push(2);
    S.push(7);
    S.push(9);
    S.push(4);
    // S.push(4);
    S.pop();
    S.pop();
    S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
     
    cout<< S.peek()<<endl;
    cout<< S.IsEmpty()<<endl;
     cout<< S.IsSize()<<endl;
}