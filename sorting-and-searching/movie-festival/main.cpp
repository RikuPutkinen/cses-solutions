#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n{}, a{}, b{}, c{}, m{};
    vector<pair<int,int>> v;
    cin >> n;

    while (n--){
        cin >> a >> b;
        // Put ending time first for easier sorting
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());

    for (auto x : v){
        if (x.second >= c){
            c = x.first;
            m++;
        }
    }

    cout << m << "\n";

    return 0;
}