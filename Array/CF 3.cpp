#include <iostream>
using namespace std;
void solve1() {
    int x, z = 0;
    cin >> x;
    int y[x];

    while (cin >> y[z++]);

    int l = 0, k = x;

    for (int i = 0; i < x; i++) {
        if (y[i]) {
            int m = 0;

            for (int j = i + 1; j < x; j++) {
                if (y[i] == y[j]) {
                    m++;
                    y[j] = 0;
                }
            }
            if (m > 0) k -= m;
            if (m > l) l = m;
        }
    }
    cout << l + 1 << " " << k;
}
void solve2() {
    int x, z = 0, even = 0, odd = 0, eve = 0, od = 0;
    cin >> x;
    int y[x];
    
    while (z < x)
        cin >> y[z++];
    
    z = 0;
    while (z++ < x) {
        if (y[z - 1] % 2 == 0) {
            even++;
            eve = z - 1;
        } else {
            odd++;
            od = z - 1;
        }
    }
    if (even == 1) 
        cout << eve + 1;
    else 
        cout << od + 1;
    return 0;
}
void solve3() {
    int n, k, z = 0, c = 0;
    cin >> n >> k;
    int y[n];

    while (cin >> y[z++]);
    z = 0;
    while (z++ < n) {
        if (y[z - 1] >= y[k - 1]) {
            if (y[z - 1] > 0)
                c++;
        } else {
            break;
        }
    }
    cout << c;
}

