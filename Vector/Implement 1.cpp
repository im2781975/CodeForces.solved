#include<bits/stdc++.h>
using namespace std;
void problem() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        v.erase(v.begin(), v.end());
        int temp = 0, temp2 = 0;
        int x;
        cin >> x;
            for (int z = 0; z < x; z++) {
                int binary;
                cin >> binary;
                if (binary == 0) {
                    temp++;
                    v.push_back(temp);
              } else {
                    v.push_back(temp);
                    temp = 0;
                }
            }
        sort(v.begin(), v.end());
        cout << v[v.size() - 1] << "\n";
    }
}
void problem2() {
    int n;
    cin >> n;
    string s = "codeforces";
    for (int i = 0; i < n; i++) {
        int f = 0;
        char x;
        cin >> x;
        for (int j = 0; j < 10; j++) {
            if (x == s[j]) {
                f = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (f == 0) {
            cout << "NO" << endl;
        }
    }
}
