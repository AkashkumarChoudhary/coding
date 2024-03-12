#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data ;
    Node* next;

    public :
    Node (int data1 , Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr = {2 ,4 ,6 ,8};
    // Node y = Node {arr[0] , nullptr};

     Node* y = new Node {arr[0] , NULL};
    // cout<< y.data;
    // cout<< y.next;
    cout<< y->data;

}