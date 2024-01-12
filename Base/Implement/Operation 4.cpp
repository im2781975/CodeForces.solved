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
