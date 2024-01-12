#include<bits/stdc++.h>
using namespace std;
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
void solve_div3()
{
  set<char> unique_chars;
  int n;
  cin >> n;
  string s;
  cin >> s;
  string tmp = "";

  // Convert all characters to lowercase
  for (int i = 0; i < n; i++)
    s[i] = tolower(s[i]);

  // Create a string with unique characters
  for (int i = 0; i < n; i++)
    tmp += s[i];
  tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

  // Check if the unique characters form the string "meow"
  if (tmp == "meow")
    cout << "YES"
         << "\n";
  else
    cout << "NO"
         << "\n";
}

