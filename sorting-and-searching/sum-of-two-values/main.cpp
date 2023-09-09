#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n{}, x{}, a{};
    vector<pair<int,int>> v;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());

    auto it1 = v.begin();
    auto it2 = v.end();
    it2--;

    while (*it1 < *it2){
        if ((*it1).first + (*it2).first == x){
            cout << (*it1).second << " " << (*it2).second << "\n";
            return 0;
        }else if ((*it1).first + (*it2).first < x){
            it1++;
        }else if ((*it1).first + (*it2).first > x){
            it2--;
        }
    }

    cout << "IMPOSSIBLE" << "\n";

    return 0;
}