#include<bits/stdc++.h>
using namespace std;


const int inf = 10000;


int main(){

    int node, edges; cin >> node >> edges;

    vector<int>dist(node+1, inf);
    vector<vector<pair<int,int>>> graph(node+1);

    for(int i = 0; i < edges; i++){
        int u, v, w; cin >> u >> v >> w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int source ; cin >> source;


    set<pair<int,int>>s;
    dist[source] = 0;
    s.insert({0,source});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it : graph[x.second]){
            if(dist[it.first] > dist[x.second] + it.second){
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }

    for(int i = 1; i <= node; i++){
        if(dist[i] < inf) cout << dist[i] << " ";
        else cout << -1 << endl;
    }

}

