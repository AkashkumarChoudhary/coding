#include<iostream>
using namespace std;


// Implementation of stack

class Stack {
    int *arr ;
    int size;
    int top;
    public:
    
    bool flag ;

    // constructor
    Stack(int s){
        arr = new int [s];
        size = s; 
        top = -1 ;
        flag = 1;
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
        flag =0;
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
        if(top == -1)
        flag =1;
    }
}
// peek
int peek(){
    if(top == -1){
        cout<< "stack is empty" << endl;
        return -1;
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
int main (){
    Stack   S(5);
    S.push(-1);
    // cout<< S.peek() <<endl;
    int value = S.peek();
    if(S.flag == 0){
        cout<< value<< endl;
    }
}