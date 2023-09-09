#include <iostream>

using namespace std;

int main(){
    int n{};
    long long x{}, m{}, c{};
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++){
        cin >> x;
        a[i] = x;
    }

    c = m = a[0];
    for (int i = 1; i < n; i++){
        c = max(a[i], c + a[i]);
        m = max(c, m);
    }

    cout << m << "\n";

    return 0;
}