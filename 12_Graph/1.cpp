// here we are just simply trying to represent a graph in c++
// here matrix method is being use
// for weighted graph just say graph[i][j]=weight instead of 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    // here n is the number of node and m is the total number of edges
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1,vector<int>(n+1,0));
    // now lets take input the node between which there is a node
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the nodes between which there is an edge"<<endl;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1; // for undirected graph
    }
    cout<<"the edges between nodes of the graph ar"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){   
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}