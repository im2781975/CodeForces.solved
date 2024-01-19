#include<bits/stdc++.h>
using namespace std;
void solve9()
{
    // https://codeforces.com/contest/1702/problem/D
    string s, ns = "", op;
    int n, c = 0, news = 0;
    cin >> s >> n;
    int nn = n;
    string temp = s;
    map<char, int> m;
    sort(s.begin(), s.end());
    for (int j = 0; j < s.length(); j++)
    {
        if ((s[j] - 'a' + 1) <= n)
        {
            ns += s[j];
            n -= (s[j] - 'a' + 1);
        }
    }
    for (int i = 0; i < ns.length(); i++)
        m[ns[i]]++;
    for (int i = 0; i < temp.length(); i++)
    {
        if (m[temp[i]] > 0)
        {
            op += temp[i];
            m[temp[i]] -= 1;
            c++;
        }
        if (c == ns.length())
            break;
    }
    cout << op << "\n";
}
void solve10()
{
    // https://codeforces.com/contest/1702/problem/C
    int n, q;
    cin >> n >> q;
    // vector<int>stations(n+1);
    // vector<pair<int, int>>queries(q+1);
    int last = n - 1;
    map<int, int> m;
    map<int, int> m2;
    map<int, int> l;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
        if (m2[x] == 1)
        {
            m[x] = i;
            l[x] = i;
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        if (l[b] && m[a] && m[a] < l[b])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
