typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<vector<int>> adj(n+1, vector<int>());
        for(int i=1;i<=n;i++){
            adj[i].push_back(i==1?n:i-1);
            adj[i].push_back(i==n?1:i+1);
        }

        adj[x].push_back(y);
        adj[y].push_back(x);

        vector<int> a(n+1, -1);
        
        a[x] = 0;
        a[y] = 1;
        // Initialize queue
        queue<int> q;
        q.push(x);
        q.push(y);
        while(!q.empty()){
            int u = q.front(); q.pop();
            for(auto &v: adj[u]){
                if(a[v]==-1){
                    // Collect labels of neighbors
                    vector<int> labels;
                    for(auto &nei: adj[v]){
                        if(a[nei]!=-1){
                            labels.push_back(a[nei]);
                        }
                    }
                    // Compute mex
                    int mex = 0;
                    unordered_set<int> s(labels.begin(), labels.end());
                    while(s.find(mex)!=s.end()) mex++;
                    a[v] = mex;
                    q.push(v);
                }
            }
        }
        // Assign 0 to any remaining nodes
        for(int i=1;i<=n;i++) if(a[i]==-1) a[i]=0;
        // Output
        for(int i=1;i<=n;i++) cout << a[i] << (i<n?" ":"\n");
    }
}
