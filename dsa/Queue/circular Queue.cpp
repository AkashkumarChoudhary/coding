#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Implement circularQueue using array

class Queue
{
    int *arr ;
    int front , rear , size ;

    public:

    Queue(int n)
    {
        arr = new int [n];
        size = n;
        front = rear =-1;
    }

    // If queue is empty or not
    bool IsEmpty()
    {
        return front == -1;
    }

    // Queue is full or not
    bool IsFull()
    {
         return (rear+1 ) % size == front;
    }

    // push element into queue, and
    void push(int x)
    {
        // empty
        if(IsEmpty())
        {
            cout<<"Pushed " <<x << " into the queue\n";
            front = rear = 0;
            arr[0]= x;
            return;
        }
        // full
            else if(IsFull())
            {
                cout<<"Queue OverFlow\n";
                return;
            }
        // insert
        else{
            rear = (rear +1)%size;
            arr[rear ] = x;
            cout<< "Pushed " << x << " into the Queue\n" ;
        }
    }

    // pop element
    void pop ()
    {
    //    empty
    if(IsEmpty())
    {
        cout<< "Queue UnderFlow\n";
        return ;
    }
    // pop kar do
        else
    {
        if(front == rear)
        {
            cout<<"Popped " << arr[front] << "into the Queue\n" ;
            front = rear = -1;
        }
        else
        {
            cout<< "Popped " << arr[front]<< " Into the Queue\n";
           front = (front +1)%size;
        }
    }
}

// start mein kaunsa element rkha hai
int start()
{
    if(IsEmpty())
    {
        cout<< "Queue is empty\n";
        return -1;
    }
    else
    return arr[front];
}
};

int main()
{
    Queue q(5);
    q.push(4);
    q.push(40);
    q.push(14);
    q.push(18);
    q.push(19);
    q.pop();
    q.push(21);
    q.pop();
    q.pop();
     
     
     
     
}