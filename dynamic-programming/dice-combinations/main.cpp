#include <iostream>

using namespace std;

int main(){
    int M = 1000000007;
    int n{};
    cin >> n;
    int ready[1000001];
    ready[0] = 1;
    
    for (int i = 1; i <= n; i++){
        ready[i] = 0;
        for (int j = 0; j <= 6; j++){
            if (i - j >= 0){
                ready[i] += ready[i-j];
                ready[i] %= M; 
            }
        }
    }

    cout << ready[n] << "\n";

    return 0;
}