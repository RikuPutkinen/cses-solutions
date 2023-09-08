#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m, hi, ti;
    multiset<int> h;
    cin >> n >> m;
    int t[m];

    for (int i = 0; i < n; i++){
        cin >> hi;
        h.insert(hi);
    }
    for (int i = 0; i < m; i++){
        cin >> ti;
        t[i] = ti;
    }

    for (int i = 0; i < m; i++) {
        auto it = h.upper_bound(t[i]);
        if (it == h.begin()){
            cout << -1 << "\n";
        }else {
            it--;
            cout << *it << "\n";
            h.erase(it);
        }
    }

    return 0;

}