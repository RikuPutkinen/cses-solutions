#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n{}, x{};
    cin >> n >> x;
    int h[n], s[n];

    for (auto &x : h) cin >> x;
    for (auto &x : s) cin >> x;

    vector<vector<int>> memo(n+1, vector<int>(x+1, 0));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= x; j++){
            memo[i][j] = memo[i-1][j];
            if(j - h[i-1] >= 0){
                memo[i][j] = max(memo[i][j], memo[i-1][j-h[i-1]] + s[i-1]);
            }
        }
    }
    cout << memo[n][x] << "\n";

    return 0;
}