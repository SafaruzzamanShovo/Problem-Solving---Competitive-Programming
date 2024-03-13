#include<bits/stdc++.h>
using namespace std;


void dfs(int node, vector<int>&vis, vector<int>adj[], stack<int>&st){

    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, vis, adj,st);
        }
    }

    st.push(node);

}


void dfs3(int node, vector<int>&vis, vector<int>adjT[]){
    cout << node << " ";
    vis[node] = 1;
    for(auto i: adjT[node]){
        if(!vis[i]){
            dfs3(i, vis, adjT);
        }
    }

}

void scc_creator(int node, vector<int>adj[]){

    vector<int>vis(node+1, 0);
    stack<int>st;

    for(int i = 0; i < node; i++){
        if(!vis[i]){
            dfs(i, vis, adj,st);
        }
    }


    vector<int>adjT[node];
    for(int i = 0; i < node; i++){
        vis[i] = 0;
        for(auto it: adj[i]){
            adjT[it].push_back(i);
        }
    }


    int scc = 0;
    while(!st.empty()){
        int nd = st.top();
        st.pop();
        if(!vis[nd]){
            scc ++;
            cout << "SCC : " ;
            dfs3(nd, vis, adjT);
        }
    }

    cout << "Total SCC is = " << scc << endl;

}


int main(){

    int n,m; cin >> n >> m;
    vector<int>adj[n+1];
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }

    scc_creator(n, adj);

}
