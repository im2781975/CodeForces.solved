#include<bits/stdc++.h>
using namespace std;
void solvee() {
    int n;
    cin >> n;
    vector<char> v(n);
    string s;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        v[i] = s[i];
    }
    
    sort(v.begin(), v.end());
    cout << static_cast<int>(v[n - 1]) - 48 << "\n";
}

