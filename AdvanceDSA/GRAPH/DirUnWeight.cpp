#include<iostream>
#include<vector>
using namespace std;

// Adjacency matrix
// directed unweighted graph


int main()
{
    int vertex , edges ;
    cin >> vertex>> edges;

    vector<vector<bool> >AdjMat(vertex, vector<bool>(vertex,0));

    int u , v;
    for(int i =0; i<edges; i++)
    {
        cin>>u >> v;
        AdjMat[u][v] = 1;
      }

     for(int i= 0; i<vertex;i++)
     {
        for( int j =0 ;j<vertex ; j++ ) 

        cout<< AdjMat[i][j] << " ";

        cout<< endl << " ";
     }
}
