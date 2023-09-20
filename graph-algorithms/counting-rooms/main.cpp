#include <iostream>
#include <vector>

using namespace std;

bool isValid(int y, int x, int& n, int& m, vector<vector<bool>>& v){
    if (y < 0 || y >= n || x < 0 || x >= m) return false;
    if (v[y][x]) return false;
    return true;
}

void dfs(int y, int x, int& n, int& m, vector<vector<bool>>& v){
    vector<pair<int,int>> moves{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    v[y][x] = true;
    for (auto move : moves){
        int current_y = y + move.first;
        int current_x = x + move.second;
        if (isValid(current_y, current_x, n, m, v)){
            dfs(current_y, current_x, n, m, v);
        }
    }
}

int main(){
    int n{}, m{}, r{};
    cin >> n >> m;
    vector<vector<bool>> v(n, vector<bool>(m, false));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            char c{};
            cin >> c;
            v[i][j] = (c == '#') ? true : false;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            if (!v[i][j]) {
                dfs(i, j, n, m, v);
                r++;
            }
        }
    }

    cout << r << "\n";

    return 0;
}