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
void solve3() {
    int x;
    string s;
    cin >> x >> s;

    if (s.size() <= x) {
        cout << s;
    } else {
        cout << s[0];
        if (s[0] == s[s.size() - 1] && s.size() - 1 > 0) {
            cout << s.size() - 1;
        } else {
            if (s.size() - 2 > 0) {
                cout << s.size() - 2 << s[s.size() - 1];
            } else {
                cout << s[s.size() - 1];
            }
        }
    }
}
void solve4() {
    string s;
    cin >> s;
    int sum = 0, sumn = 0, z = 0;

    while (z++ < s.size())
        sum += (s[z - 1] - 48);

    while (true) {
        if (sum < 10)
            break;
        else {
            sumn = 0;
            while (sum > 0) {
                sumn += sum % 10;
                sum /= 10;
            }
            sum = sumn;
        }
    }
    cout << sum;
}
void solve5() {
    string x, y;
    cin >> x >> y;

    int z = 0, c = 0;
    while (z++ < x.size())
        if (x[z - 1] != y[z - 1])
            c++;
        cout << c;
}
void solve6() {
    string s;
    int c = 0, d = 0, z = 0;
    cin >> s;
    while (true) {
        if (s[z] == s[++z]) 
            c++;
        else 
            break;
    }
    while (z < s.size()) {
        d = 0;

        while (z < s.size()) {
            if (s[z] == s[++z]) 
                d++;
            else 
                break;
        }
        if (c != d) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
void solve7() {
    int x, z = 0, maxl = 0, maxch = 0, maxchi = 0;
    cin >> x;
    string s[x];

    while (z++ < x)
        cin >> s[z - 1];

    z = 0;
    while (z++ < x) {
        if (s[z - 1].size() >= s[maxl].size())
            maxl = z - 1;

        int y = 0;
        int sum = 0;
        while (y++ < s[z - 1].size())
            sum += (s[z - 1][y - 1] - 64);

        if (sum >= maxch) {
            maxch = sum;
            maxchi = z - 1;
        }
    }
    cout << s[maxchi] << "\n" << s[maxl];
}
void solve8() {
    string s, d;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);

    int z = 0, f = 0;
    while (z++ < s.size()) {
        if (s[z - 1] != 'a' && s[z - 1] != 'u' && s[z - 1] != 'o' && s[z - 1] != 'i' && s[z - 1] != 'e' && s[z - 1] != 'y') {
            d[f] = '.';
            d[f + 1] = s[z - 1];
            f += 2;
        }
    }
    z = 0;
    while (z++ < f)
        cout << d[z - 1];
}
void problem3() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp1 = 0, temp2 = 0, f = 0;
        int l;
        cin >> l;
        string x;
        cin >> x;
        for (int j = 0; j < x.length(); j++) {
            if (x[j] == 'U') 
                temp1 += 1;
            else if (x[j] == 'D') 
                temp1 -= 1;
            else if (x[j] == 'R')  
                temp2 += 1;
            else if (x[j] == 'L') 
                temp2 -= 1;
            if (temp1 == 1 && temp2 == 1) {
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if (f == 0) 
            cout << "NO\n";
    }
}
void solveE()
{
    string s, s2;
    cin >> s >> s2;
    int temp = 0;
    int temp2 = 0;
    int len1 = s.length(), len2 = s2.length();
    if (s[len1 - 1] == 'M')
        temp = 1;
    else if (s[len1 - 1] == 'L')
        temp = (len1)*2;
    else if (s[len1 - 1] == 'S')
        temp = len1 * -1;

    if (s2[len2 - 1] == 'M')
        temp2 = 1;
    else if (s2[len2 - 1] == 'L')
        temp2 = len2 * 2;
    else if (s2[len2 - 1] == 'S')
        temp2 = len2 * -1;

  // sec string
    if (temp > temp2)
        cout << ">" << "\n";
    else if (temp < temp2)
        cout << "<" << "\n";
    else
        cout << "=" << "\n";
    temp = 0;
    temp2 = 0;
}
void solve9() {
    string x, y = "heavy", z = "metal";
    cin >> x;
    long long h = -5, m, c = 0;

    for (int i = 0;; i++) {
        h = x.find(y, h + 5);

        if (h > -1) {
            m = x.length();

            for (int j = 0;; j++) {
                m = x.rfind(z, m - 1);

                if (m > -1 && m > h + 4)
                    c++;
                else 
                    break;
            }
        }else
            break;
    }
    cout << c;
}
void solve10() {
    string s;
    cin >> s;
    int z = 0, c = 0;
    
    while (z++ < s.size()) {
        if (s[z-1] == 'h' && c == 0) {
            c++;
            continue;
        }
        if (s[z-1] == 'e' && c == 1) {
            c++;
            continue;
        }
        if (s[z-1] == 'l' && c == 2) {
            c++;
            continue;
        }
        if (s[z-1] == 'l' && c == 3) {
            c++;
            continue;
        }
        if (s[z-1] == 'o' && c == 4) {
            c++;
            break;
        }
    }
    if (c == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
