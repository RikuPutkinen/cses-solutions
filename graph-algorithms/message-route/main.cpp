#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n{}, m{};
    cin >> n >> m;
    vector<bool> v(n+1, false);
    vector<int> l(n+1, -1);
    vector<int> d(n+1, 0);
    vector<int> r;
    vector<int> adj[n+1];
    queue<int> q;

    for (int i = 1; i <= m; i++){
        int a{}, b{};
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    v[1] = true;
    q.push(1);

    while (!q.empty()){
        int c = q.front();
        q.pop();

        for (int e : adj[c]){
            if (v[e]) continue;
            v[e] = true;
            d[e] = d[c] + 1;
            l[e] = c;
            q.push(e);
        }
    }

    if (!v[n]){
        cout << "IMPOSSIBLE" << "\n";
        return 0;
    }

    int c = n;
    r.push_back(n);
    while (l[c] > -1){
        r.push_back(l[c]);
        c = l[c];
    }

    cout << r.size() << "\n";
    for (int i = r.size() - 1; i >= 0; i--){
        cout << r[i] << " ";
    }
    cout << "\n";

    return 0;
}