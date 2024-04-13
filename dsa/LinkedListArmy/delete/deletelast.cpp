#include<iostream>
using namespace std;

class Node 
{
public :
    int data;
    Node* next;

    Node ( int value)
    {
        data = value ;
        next = NULL;

    }
};

Node * CreateLinkedList ( int arr[ ] , int index , int size )
{
    if(index == size )
     return NULL;

     Node *Head = new Node( arr [index]);
     Head -> next = CreateLinkedList(arr , index+1 , size );
     return Head;

}

int main ()
{
    Node *Head ;
    Head = NULL;
    int arr [ ] = { 3, 4, 5 ,1 ,7};

    Head = CreateLinkedList( arr, 0 , 5);

    // Deletion at end

    if(Head != NULL )
    {
        if(Head -> next == NULL)
        {
            Node*temp = Head;
            delete temp ;
            Head =  NULL;

        }
        else
        {
            Node *curr = Head;
            Node *prev = NULL;

            while(curr->next != NULL)
            {
                prev =curr ;
                curr = curr -> next  ;
            }
            prev -> next = NULL;
            delete curr;
        }
    }


    while (Head)
    {
        cout<< Head -> data << " ";
        Head = Head ->next;
    }
    
}


