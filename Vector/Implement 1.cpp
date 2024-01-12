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
void Forbidden_Integer() {
    long long n, k, x;
    cin >> n >> k >> x;
    vector<long long> v(k);
    vector<long long> res;

    if (k == 1) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i <= k; i++) {
        v[i - 1] = i;
    }

    sort(v.begin(), v.end());

    for (int j = k - 1; j >= 0; j--) {
        while (n >= v[j] && v[j] != x) {
            n -= v[j];
            res.push_back(v[j]);
        }
    }

    if (n == 0) {
        cout << "YES" << "\n";
        cout << res.size() << "\n";

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << endl;
    } else {
        cout << "NO" << "\n";
    }
}
void solveee() {
    int n;
    cin >> n;
    int newn = n / 2;
    vector<int> v(newn);
    vector<int> v2(newn);
    if (n % 2 != 0) {
        for (int i = 0; i < n / 2; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n / 2; i++) {
            cin >> v2[i];
        }
    } else {
        for (int i = 0; i < n / 2; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n / 2; i++) {
            cin >> v2[i];
        }
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    cout << (v[newn - 1] + v2[newn - 1]) - (v[0] + v2[0]) << "\n";
}

