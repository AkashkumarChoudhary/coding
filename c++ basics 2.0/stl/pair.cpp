#include <iostream>
using namespace std;

void explainPair (){
    pair<int , int>p= {1, 3};

    cout<< p.first << " " << p.second;

    pair <int, pair<int , int>> r = {1 ,{3,4}};
    cout<< r.first << " " << r.second.first << " " << r.second.second;

    pair<int,int > arr[] = {{1,2}, {2 ,5 } ,{6 ,8}};
    cout<<arr[1].second;
}

int main(){
    explainPair();
    return 0;
}