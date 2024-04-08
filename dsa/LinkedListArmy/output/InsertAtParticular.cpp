#include<iostream>
#include <cstddef> 
using namespace std;

class Node
{
    public:
    int data ;
    Node *next;

    Node(int value)
    {
        data = value ;
        next = NULL;
    }
};

Node CreateLinkedList (int arr[],int index, int size)
{
    // Base case
    if (index == size)
        return NULL;

     Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
}

int main()
{
    Node* Head ;
    Head = NULL;

    int arr[] ={ 2, 4, 5,6 , 7,8};

    Head = CreateLinkedList(arr , 0 ,5);

    // Insert Node at particular Position
    int x = 3; //Insert POsition
    int value = 30;

    Node* temp = Head;
    x-- ;

    while(x--)
    {
        temp = temp -> next;

    };

    Node* temp2 =  new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // print the  value
    
    temp =Head;
    while(temp)
    {
        cout << temp -> data << " ";
        temp = temp->next ;
    }

}
