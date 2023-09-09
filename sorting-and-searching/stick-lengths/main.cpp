#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n{}, pi{}, t{};
    cin >> n;
    long long p[n];

    for (int i = 0; i < n; i++){
        cin >> pi;
        p[i] = pi;
    }
    sort(p, p+n);
    int mi = floor(n / 2);
    long long m = p[mi];

    for (auto x : p){
        t += abs(x - m);
    }

    cout << t << "\n";

    return 0;
}