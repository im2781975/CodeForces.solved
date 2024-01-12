void solve_b_div4()
{
  int n;
  cin >> n;
  set<int> s({});
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s.emplace(x);
  }
  for (auto j : s)
  {
    ans++;
  }
  if (ans == n)
    cout << "YES"
         << "\n";
  else
    cout << "NO"
         << "\n";
}

