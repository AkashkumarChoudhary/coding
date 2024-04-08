#include<iostream>
using namespace std;


class Node 
{
public:
    int data ;
    Node *next;

Node(int value)    
{
    data =value;
    next = NULL;

}
};

Node *CreateLinkedList (int arr[] , int index , int size)
{
    if(index == size)
    return NULL;

    Node *temp = new Node (arr[index]);
    temp ->next = CreateLinkedList(arr, index+1, size);
    return temp ;
} 


