#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node  *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main ()
{
    Node* Head = NULL;
    Node *Tail = NULL ;

    // Insert the value at end
    int arr[] = {2, 4 , 5, 67 ,7};

    for(int i = 0 ; i< 5 ; i++)
    {
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else{
            Tail->next = new Node (arr[i]);
           Tail = Tail-> next;
        }
    }

    Node*temp;
    temp = Head;

    while(temp)
    {
        cout<< temp-> data << " ";
        temp =  temp -> next;
    }

}