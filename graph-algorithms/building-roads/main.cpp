#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<int> adj[], vector<bool>& v){
    if (v[node]) return;
    v[node] = true;

    for (auto n : adj[node]){
        dfs(n, adj, v);
    }
}

int main(){
    int n{}, m{};
    cin >> n >> m;
    vector<bool> v(n+1, false);
    vector<int> adj[n+1];
    vector<pair<int,int>> r;

    for (int i = 0; i < m; i++){
        int a{}, b{};
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if (!v[i]){
            dfs(i, adj, v);
            if(i > 1) r.push_back({i-1, i});
        }
    }

    cout << r.size() << "\n";
    for (auto x : r){
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}