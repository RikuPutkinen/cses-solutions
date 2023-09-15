#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int MAXN = 1e6 + 1;
    int n{}, x{};
    cin >> n >> x;

    int c[n];
    int ready[x+1];
    ready[0] = 0;

    for (int i = 0; i < n; i++){
        cin >> c[i];
    }

    for (int i = 1; i <= x; i++){
        ready[i] = MAXN;
        for (auto j : c){
            if (i-j >= 0){
                ready[i] = min(ready[i], ready[i-j] + 1);
            }
        }
    }

    cout << ((ready[x] == MAXN) ? -1 : ready[x]) << "\n";

    return 0;
}