void solve1()
  {
    // https://codeforces.com/contest/1843/problem/A
    ll size;
    cin >> size;
    vector<ll> v(size);
    ll subtracts = 0;
    ll sum = 0;
    for (int i = 0; i < size; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    if (size % 2 == 0)
      for (int j = size - 1, i = 0; j >= size / 2, i < size / 2; j--, i++)
        sum += v[j] - v[i];
    else
      for (int j = size - 1, i = 0; j > size / 2, i < size / 2; j--, i++)
        sum += v[j] - v[i];
    cout << sum - subtracts << "\n";
  }
  void solve2()
  {
    // https://codeforces.com/contest/1843/problem/B
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    int c = 0;
    int subarray = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      sum += abs(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
      if (v[i] == 0)
        continue;
      for (int z = i; z < n; z++)
      {
        if (v[z] <= 0)
        {
          flag = false;
          i = z;
        }
        else
          break;
      }
      if (!flag)
        subarray++;
      flag = true;
      c++;
    }
    cout << sum << " " << subarray << "\n";
  }
