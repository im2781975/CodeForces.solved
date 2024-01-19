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
