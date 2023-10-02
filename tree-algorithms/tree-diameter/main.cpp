#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

#define NMAX 2e5

using namespace std;

vector<vector<int>> d(2, vector<int>(NMAX + 1, -1));
vector<vector<int>> adj(NMAX + 1);

int dfs(int n, int i){
    stack<pair<int, int>> s;
    s.push({n,0});

    while(!s.empty()){
        int c = s.top().first;
        int p = s.top().second;
        d[i][c] = d[i][p] + 1;
        s.pop();
        for (auto a : adj[c]){
            if (a != p) s.push({a, c});
        }
    }
    auto r = max_element(d[i].begin(), d[i].end());
    return distance(d[i].begin(), r);
}

int main(){
    int n{};
    cin >> n;

    for (int i = 0; i < n-1; i++){
        int a{}, b{};
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int r1 = dfs(1, 0);
    int r2 = dfs(r1, 1);

    cout << d[1][r2] << "\n";

    return 0;
}