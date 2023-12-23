#include <bits/stdc++.h>
  using namespace std;

  int main() {

    // what we are simply given is an edgelist and few cursed cities 
    // from the begining we can avoid cursed cities by not making such edges with the target being a cursed city 
    int n , m ; // n -- number of vertex , m -- number of edges 
    
    int s , d ; // s -- starting vertex , n -- ending vertex 
    
    
    cin>>n>>m; 
    
    cin>>s>>d;
    if(s == d){
        cout<<0;
        return 0; 
    }
    
    vector<int> cursedVertex(n);
    
    vector<vector<int>> adjList(n);
    
    for(int i = 0 ; i < n ; i++){
      cin>>cursedVertex[i];
    }
    
    int u , v ; 
    
    for(int i = 0 ;i < m ; i++){
      cin>>u>>v; 
      if(cursedVertex[u] || cursedVertex[v]) continue;
       adjList[u].push_back(v);
       adjList[v].push_back(u);
    }
    
    queue<int> bfs; 
    int curr = -1 , level = 0;
    
    bfs.push(s);
   
    while(!bfs.empty()){
      n = bfs.size(); 
      
      while(n--){
        curr = bfs.front(); 
        bfs.pop();
        
        for(int v: adjList[curr]){
          if(v == d){
            cout<<level+1;
            return 0;
          }
          bfs.push(v);
        }
      }
        level++;
    }
    
    cout<<-1;
    
    return 0;
  }