#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main(){
    int n{}, m{};
    cin >> n >> m;

    vector<long long> d(n + 1, LLONG_MAX);
    vector<bool> p(n+1, false);
    vector<vector<pair<int, int>>> adj(n+1);

    while (m--){
        int a{}, b{}, c{};
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    priority_queue<pair<long long, long long>> q;
    d[1] = 0;
    q.push({0LL,1LL});
    while (!q.empty()){
        long long a = q.top().second;
        q.pop();
        if (p[a]) continue;
        p[a] = true;

        for (auto x : adj[a]){
            long long b = x.first, c = x.second;
            if (d[a] + c < d[b]){
                d[b] = d[a] + c;
                q.push({-d[b], b});
            }
        }
    }

    for (int i = 1; i <= n; i++){
        cout << d[i] << " ";
    }
    cout << "\n";

    return 0;
}