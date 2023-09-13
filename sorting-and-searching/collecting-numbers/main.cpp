#include <iostream>

using namespace std;

int main(){
    int n{}, x{}, r{1};
    cin >> n;
    int p[n];

    for (int i = 0; i < n; i++){
        cin >> x;
        p[x-1] = i;
    }

    for (int i = 1; i < n; i++){
        if (p[i-1] > p[i]) r++;
    }

    cout << r << "\n";

    return 0;
}
