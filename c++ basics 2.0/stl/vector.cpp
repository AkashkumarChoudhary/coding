#include <bits/stdc++.h>
using  namespace std;

void explainVector() {
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;
    vec.push_back({1,3});
    vec.emplace_back(1,2);

    vector<int>p (5 ,100);
    
    vector<int>r(5);
    vector<int> v1(5, 20);
    vector<int> v2(v1);

    //  vector <int> :: iterator it = v.begin();
    // it++ ;
    // cout<< *(it) << " ";
    // vector<int>::iterator it = v.end() ;
    // vector<int> :: iterator it = v.rend ();
    // vector<int> :: iterator it = v.rbegin();

    // cout<< v[0] << " " << v.at(0);

    // cout<< v.back() << " ";

    for(vector <int> :: iterator it = v.begin();it !=v.end();it++ ){
         cout<<*(it) << " ";
     }

    for (auto it = v.begin() ; it != v.end() ; it++ ){
        cout<< *(it) << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }

    // (10 , 20 , 12 ,23)
    v.erase(v.begin()+1);

    // (10, 20 , 12,23, 35)
    v.erase(v.begin()+2 ,v.begin()+4);


    // Insert Function

    vector<int>v(2, 100); //{100}
    v.insert(v.begin(),300);
}

int main(){
    explainVector();
   
    return 0;
}