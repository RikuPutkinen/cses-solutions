#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n{}, xi{};
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++){
        cin >> xi;
        x[i] = xi;
    }

    sort(x, x+n);
    long long ans{1};

    for (int i = 0; i < n; i++){
        if (ans >= x[i]){
            ans += x[i];
        }else{
            break;
        }
    }

    cout << ans << "\n";
    return 0;
}