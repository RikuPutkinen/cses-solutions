#include <iostream>
#include <vector>

#define NMAX 2e5

using namespace std;

vector<int> cnt(NMAX + 1, 0);
vector<vector<int>> adj(NMAX + 1);

void dfs(int n){
    cnt[n] = 1;

    for (auto c : adj[n]){
        dfs(c);
        cnt[n] += cnt[c];
    }
}

int main(){
    int n{};
    cin >> n;

    for (int i = 2; i <= n; i++){
        int m{};
        cin >> m;
        adj[m].push_back(i);
    }

    dfs(1);

    for (int i = 1; i <= n; i++){
        cout << cnt[i] - 1 << " ";
    }
    cout << "\n";

    return 0;
}