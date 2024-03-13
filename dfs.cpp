#include<bits/stdc++.h>
using namespace std;

void dfs(int startNode,vector<int>adj[],int visited[],vector<int>&ls){
    visited[startNode]=1;
    ls.push_back(startNode);
    // traverse all the neighbours
    for(auto i:adj[startNode]){
        if(!visited[i]){
            dfs(i,adj,visited,ls);
        }
    }

}

vector<int> dfsTraversal(int startNode , int numberOfNode , vector<int>adj[]){
    int visited[numberOfNode+1]={0};
    int node = startNode;
    vector<int>ls;
    dfs(node,adj,visited,ls);
    return ls;

}

int main(){

    int n;
    cout << "Enter the number of Nodes : ";
    cin >> n;
    int m;
    cout << "Enter the number of Edges : ";
    cin >> m;
    vector<int>adj[n+1],res;
    cout << "Input the adjacent edges : " << endl;
    for(int i=0;i<m;i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start ;
    cout << "Start from node : ";
    cin >> start;



    res = dfsTraversal(start,n,adj);

    for(auto i:res){
        cout << i << " ";
    }
    cout << endl;

}
