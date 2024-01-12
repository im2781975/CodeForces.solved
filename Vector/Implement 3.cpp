void solve_div4c()
{
  int n;
  cin >> n;
  ll temp1 = 999999999999999;
  ll temp2 = 999999999999999;
  int c1 = 0;
  int c2 = 0;
  int f = 0;
  ll t = 999999999999999;
  ll t2 = 999999999999999;
  vector<pair<int, string>> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());

  bool first = true;
  bool second = true;
  for (int j = 0; j < n; j++)
  {
    if (v[j].second == "11")
    {
      c1++;
      c2++;
      temp1 = v[j].first;
    }
    else
    {
      if (v[j].second == "01" && second)
      {
        c1++;
        t = v[j].first;
        second = false;
      }
      if (v[j].second == "10" && first)
      {
        c2++;
        t2 = v[j].first;
        first = false;
      }
      temp1 = t + t2;
    }
    temp2 = min(temp2, temp1);
  }
  if (c1 > 0 && c2 > 0)
    cout << temp2 << "\n";
  else
    cout << -1 << "\n";
}
