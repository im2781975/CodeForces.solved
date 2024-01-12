void div2_29_7_23B()
  {
    ll n, msize = 0, ans = 0, mTest = 10000;
    cin >> n;
    for (int i = 1; i <= mTest; i++)
    {
      if (n % i == 0)
        ans++;
      else
      {
        msize = max(msize, ans);
        ans = 0;
      }
    }
    cout << msize << "\n";
  }
ll maxe(ll num, ll num2)
  {
    if (num > num2)
      return num;
    else
      return num2;
  }
  bool isSorted(vector<ll> v)
  {
    for (int i = 1; i < v.size(); i++)
    {
      if (v[i - 1] > v[i])
        return false;
    }
    return true;
  }
  bool checking(string s)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] != '0')
        return true;
    }
    return false;
  }
  bool LocalMax(vector<ll> v)
  {
    for (int i = 1; i < v.size(); i++)
    {
      if (i != v.size() - 1)
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
          return false;
    }
    return true;
  }
