void solveContest1790ProblemB()
  {
    int n, s, r, temp = 0, temp2 = 1;
    cin >> n >> s >> r;
    temp = r;
    vector<int> v;
    vector<int> sides = {1, 2, 3, 4, 5, 6};
    vector<int> result;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 5; j >= 0; j--)
      {
        while (r >= sides[j] && sides[j] <= s - r)
        {
          r -= sides[j];
          result.pb(sides[j]);
          temp2++;
        }
      }
    }
    sort(result.rbegin(), result.rend());
    for (int i = 0; i < n - 2; i++)
    {
      while (result[i] > 1)
      {
        if (result.size() == n - 1)
          break;
        result[i]--;
        result.pb(1);
      }
    }
    result.pb(s - temp);
    for (auto j : result)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
void solveDiv2A()
  {
    ll n;
    bool flag = true;
    ll temp = 9999999999999999;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    for (int i = 1; i < n; i++)
    {
      if (v[i] < v[i - 1])
      {
        flag = false;
        break;
      }
    }
    if (flag)
    {
      for (int i = 1; i < n; i++)
      {
        temp = min(temp, v[i] - v[i - 1]);
      }
      cout << temp / 2 + 1 << "\n";
    }
    else
      cout << 0 << "\n";
  }
  void div2BFibonachairs()
  {
    ll n, k, ans = 0, t = 0, t2 = 0;
    cin >> n >> k;
    ll temp = k;
    vector<ll> v;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      ll t3 = 0;
      t = n;
      t2 = n - i;
      for (int j = 2; j < k; j++)
      {
        if (t3 >= 0)
        {
          t3 = t - t2;
          t = t2;
          t2 = t3;
        }
        else
          break;
      }
      if (t3 >= 0 && t2 <= t)
      {
        ans++;
      }
    }
    cout << ans << "\n";
  }
