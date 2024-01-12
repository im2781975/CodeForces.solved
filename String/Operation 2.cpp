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
void solveContest1790ProblemA()
  {
    string s = "314159265358979323846264338327";
    string ns;
    cin >> ns;
    int temp = 0;
    for (int i = 0; i < ns.length(); i++)
      if (ns[i] == s[i])
        temp++;
      else
        break;
    cout << temp << "\n";
  }
