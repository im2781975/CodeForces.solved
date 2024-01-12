void solve9()
  {
    // https://codeforces.com/contest/1702/problem/D
    string s, ns = "", op;
    ll n, c = 0, news = 0;
    cin >> s >> n;
    ll nn = n;
    string temp = s;
    map<char, ll> m;
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
    ll n, q;
    cin >> n >> q;
    // vector<ll>stations(n+1);
    // vector<pair<ll,ll>>queries(q+1);
    int last = n - 1;
    map<ll, ll> m;
    map<ll, ll> m2;
    map<ll, ll> l;
    for (int i = 1; i <= n; i++)
    {
      ll x;
      cin >> x;
      m2[x]++;
      if (m2[x] == 1)
        m[x] = i;
      l[x] = i;
    }
    for (int i = 1; i <= q; i++)
    {
      ll a, b;
      cin >> a >> b;

      if (l[b] && m[a] && m[a] < l[b])
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  void solve11()
  {
    ll n;
    cin >> n;
    string op = "";
    ll t = 0;
    string s;
    cin >> s;
    map<string, ll> m;
    for (int i = 1; i < n; i++)
    {
      string temp;
      temp += s[i - 1];
      temp += s[i];
      m[temp]++;
      if (t < m[temp])
      {
        t = m[temp];
        op = temp;
      }
      temp = "";
    }
    cout << op << "\n";
  }
