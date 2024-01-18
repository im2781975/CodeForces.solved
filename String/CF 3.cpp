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
void solve2() {
    string s;
    getline(cin, s);
    
    unsigned int i;
    for(i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    
    for(i = 0; i < s.size(); i++) {
        if(s[i] < 97 || s[i] > 122) {
            s.erase(i, 1);
            i--;
        }
    }
    unsigned int z = 0, c = 0, f = s.size() - 1;
    z = 0;
    while (z++ < s.size() / 2) {
        if (s[z - 1] != s[f--]) {
            c++;
            break;
        }
    }
    if (c == 0)
        cout << "I'll make the saddle";
    else
        cout << "Alas, Jon, You failed my test";
    return 0;
}
