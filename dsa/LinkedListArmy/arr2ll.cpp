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

int main()
{
    Node *Head ;
    Head = NULL;

    // int arr []= {1 , 3, 5, 7, 9};
    vector<int> arr = {1 ,3 ,  5, 6 ,7};
    // insert arr to linked list


    for(int i = 0 ;  i < arr.size() ; i++)
    {
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp ;
            temp = new Node(arr[i]);
            temp ->next = Head;
            Head = temp ;

        }
    }
    

    // Print the linked list

    Node *temp = Head;
    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp-> next;
    };
    

}