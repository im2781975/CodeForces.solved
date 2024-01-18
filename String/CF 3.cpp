#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int m, n, d = 0;
    cin >> m >> n;
    string x, y, z, s, res[m * n];

    while (d++ < m * n) {
        cin >> x >> y >> z;
    
        if (y == "0000000000" && z == "0000000000") {
            if (d == 1)
                cout << x;
            else
                cout << endl << x;
        }else {
            if (z == s)
                cout << x;
            if (z == "0000000000")
                cout << endl << x;
        }
        s = x;
    }
}
