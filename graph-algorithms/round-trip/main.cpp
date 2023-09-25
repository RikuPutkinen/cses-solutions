#include <iostream>
#include <vector>

using namespace std;

const int NMAX = 1e5;
const int MMAX = 2e5;

int n{}, m{};
vector<bool> visited(NMAX + 1, false);
vector<int> previous(NMAX + 1, -1);
vector<int> adj[NMAX + 1];
int start{};
int ending{};

bool dfs(int n, int p){
    visited[n] = true;
    previous[n] = p;

    for (int c : adj[n]){
        if (c == p) continue;
        if (visited[c]) {
            start = c;
            ending = n;
            return true;
        }else {
            if (dfs(c, n) == true)
            return true;
        }
    }
    return false;
}

int main(){
    cin >> n >> m;
    bool possible = false;

    for (int i = 0; i < m; i++){
        int a{}, b{};
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            possible = dfs(i, -1);
            if (possible) {
                vector<int> r;
                int c = ending;
                
                r.push_back(ending);
                while (c != start && c != -1) {
                    r.push_back(previous[c]);
                    c = previous[c];
                }
                r.push_back(ending);

                cout << r.size() << "\n";
                for (size_t i = 0; i < r.size(); i++){
                    cout << r[i] << " ";
                }
                cout << "\n";
                
                return 0;
            }
        }
    }

    if (!possible){
        cout << "IMPOSSIBLE" << "\n";
    }

    return 0;
}