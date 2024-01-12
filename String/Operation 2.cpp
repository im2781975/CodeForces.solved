#include<bits/stdc++.h>
void solve_ballonIcpc()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int tmp = 0;
  char arr[50] = {0};
  for (int i = 0; i < n; i++)
  {
    if (arr[s[i]] == 0)
      tmp += 2;
    else
      tmp += 1;
    arr[s[i]]++;
  }
  cout << tmp << "\n";
}

