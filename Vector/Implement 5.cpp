void solveuwu()
  {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> op;
    for (int i = 0; i < n; i++)
    {
      if (s[i + 2] == '0' && i + 2 < s.length() && s[i + 3] != '0')
      {
        int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
        op.pb(char(num + 'a' - 1));
        i += 2;
      }
      else
      {
        int num = s[i] - '0';
        op.pb(char(num + 'a' - 1));
      }
    }
    for (auto i : op)
    {
      cout << i;
    }
    cout << "\n";
  }
  void solve3divA()
  {
    vector<ll> v(7);
    vector<ll> res;
    ll temp = 0;
    int f = 0;
    ll temp2 = 0;
    int counter = 5;
    for (int i = 0; i < 7; i++)
    {
      cin >> v[i];
    }
    ll max = v[6];
    if (v[0] + v[1] + v[2] == v[6])
    {
      cout << v[0] << " " << v[1] << " " << v[2];
    }
    else
    {
      for (int j = 0; j < 7; j++)
      {
        for (int i = j + 1; i < 7; i++)
        {
          for (int z = 0; z < 7; z++)
          {
            if (v[j] + v[i] + v[z] == v[6])
            {
              cout << v[j] << " " << v[i] << " " << v[z] << "\n";
              return;
            }
          }
        }
      }
    }
    cout << "\n";
  }
  void solveDiv4C()
  {
    int a, b, res = 0, finalResult = 100000;
    cin >> a >> b;
    vector<string> s(a);
    for (int i = 0; i < a; i++)
    {
      cin >> s[i];
    }
    for (int i = 0; i < a; i++)
    {
      for (int z = i + 1; z < a; z++)
      {
        res = 0;
        for (int j = 0; j < b; j++)
        {
          if (z != i)
            res += abs((s[i][j] - 'a') - (s[z][j] - 'a'));
        }
        finalResult = min(finalResult, res);
      }
    }
    cout << finalResult << "\n";
  }
