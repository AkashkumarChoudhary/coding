#include <iostream>
using  namespace std ;

class Node 
{
    public :
    int data;
    Node *next;
    Node (int value )
    {
        data = value ;
        next  =NULL;
    }
};

class Stack 
{
    Node *top ;
    int size ; //actual size of stack

    public :

    Stack (){
        top = NULL;
        size = 0;
    }
    // push
    void push (int value)
    {
        Node *temp = new Node(value);
        if(temp == NULL)
        {
            cout<< "Stack Overflow";
            return ;
        }
        else 
        {
            temp->next = top;
            top = temp ;
            size++;
            cout<< "Pushed" << value << "into the stack";
        }
    }
    // pop
    void pop () 
    {
        if (top ==NULL)
        {
            cout<< "Stack UnderFlow";
            return;
        }
        else 
        {
            Node * temp = top;
            cout<< "Popped " <<top -> data << "from the stack \n ";
            top = top -> next;
            delete temp;
        }
    }
    // peek
    int peek (){
        if(top == NULL)
        {
            cout <<"stack is Empty";
            return -1;
        }
        else
        {
            return top ->data;
        }
        
    }
    // Isempty
    bool IsEmpty (){
        return top ==NULL;

    }
    // IsSize
    int IsSize()
    {
        return size;
    }
};

int main()
{
  Stack S;
  S.push(6);  
  S.push(16);  
  S.push(63);  
  S.push(64);
  S.pop();
  cout<< S.IsEmpty() <<endl;
  cout<<S.peek()<<endl;



}