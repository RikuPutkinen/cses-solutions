#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n{}, a{}, b{}, c{}, m{};
    vector<pair<int, int>> v;

    cin >> n;
    while (n--){
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }

    sort(v.begin(), v.end());

    for (auto x : v){
        c += x.second;
        m = max(c, m);
    }

    cout << m << "\n";

    return 0;
}