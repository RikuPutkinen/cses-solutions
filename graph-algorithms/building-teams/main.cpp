#include <iostream>
#include <vector>

using namespace std;

int NMAX = 1e5;
int MMAX = 2e5;

int n{}, m{};
vector<int> team(NMAX, 0);
vector<bool> visited(NMAX, false);
vector<vector<int>> adj(NMAX);
bool possible = true;

void dfs(int n, int t){
    visited[n] = true;
    team[n] = t;

    for (int c : adj[n]){
        if (visited[c]){
            if (team[c] == t) possible = false;
        }
        else dfs(c, (t == 1) ? 2 : 1);
    }
}

int main(){
    cin >> n >> m;

    for (int i = 1; i <= m; i++){
        int a{}, b{};
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if (!visited[i]) dfs(i, 1);
    }

    if (!possible){
        cout << "IMPOSSIBLE" << "\n";
        return 0;
    }
    for (int i = 1; i <= n; i++){
        cout << team[i] << " ";
    }
    cout << "\n";

    return 0;
}