#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n{}, x{};
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++){
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.end()){
            v.push_back(x);
        }else{
            *it = x;
        }
    }

    cout << v.size() << "\n";

    return 0;
}