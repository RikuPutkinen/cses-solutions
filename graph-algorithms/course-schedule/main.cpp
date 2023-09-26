#include <iostream>
#include <vector>

#define NMAX 1e5

using namespace std;

vector<int> r;
vector<int> state(NMAX + 1, 0);
vector<vector<int>> adj(NMAX + 1);
bool possible = true;

void dfs(int n){
    if (state[n] == 2) return;
    state[n] = 1;
    
    for (auto c : adj[n]){
        if (state[c] == 1) {
            possible = false;
            return;
        }
        dfs(c);
    }

    state[n] = 2;
    r.push_back(n);
}

int main(){
    int n{}, m{};
    cin >> n >> m;

    while (m--){
        int a{}, b{};
        cin >> a >> b;
        adj[a].push_back(b);
    }

    for (int i = 1; i <= n && possible; i++){
        dfs(i);
    }

    if (!possible){
        cout << "IMPOSSIBLE" << "\n";
        return 0;
    }
    for (int i = r.size() - 1; i >= 0; i--){
        cout << r[i] << " ";
    }
    cout << "\n";
}