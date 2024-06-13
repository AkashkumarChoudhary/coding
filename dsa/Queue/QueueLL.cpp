#include<iostream>
using namespace std;

class Node 
{
    int data;
    Node * next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
}