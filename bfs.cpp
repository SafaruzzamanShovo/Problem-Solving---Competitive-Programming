#include<bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int startNode , int numberOfNode , vector<int>adj[]){
    int visited[numberOfNode+1]={0};
    queue<int>q;
    visited[startNode]=1;
    q.push(startNode);
    vector<int>bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto i:adj[node]){
            if(!visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
    return bfs;
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

    res = bfsTraversal(start,n,adj);
    for(auto i:res){
        cout << i << " ";
    }
    cout << endl;

}
