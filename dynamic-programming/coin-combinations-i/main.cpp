#include <iostream>

#define MOD (int)1e9 + 7

using namespace std;

int main(){
    int n{}, x{};
    cin >> n >> x;

    int coins[n];
    for (auto &c : coins){
        cin >> c;
    }

    int memo[x+1];
    memo[0] = 1;

    for (int i = 1; i <= x; i++){
        memo[i] = 0;
        for (auto c : coins){
            if (i-c >= 0){
                memo[i] += memo[i-c];
                memo[i] %= MOD;
            }
        }
    }

    cout << memo[x] << "\n";

    return 0;
}