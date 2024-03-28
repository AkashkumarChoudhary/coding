#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Implement queue using array

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
    bool IsFull
    {
         return rear = size -1;
    }

    // push element into queue, and
    void push
}