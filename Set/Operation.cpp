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
int charac(vector<ll> v, int size)
  {
    set<ll> diff;
    for (int i = 0; i < size - 1; i++)
    {
      diff.insert(v[i + 1] - v[i]);
    }
    return diff.size();
  }
void solve8()
  {
    // https://codeforces.com/contest/1702/problem/B
    string s;
    cin >> s;
    set<char> set({});
    ll c = 0;
    ll cpp = 0;
    ll it = 0;
    for (int i = 0; i < s.length(); i++)
    {
      map<char, int> m; // lollipops -> abracadabra ---> abr 3 ---abra--- abra
      string ns;
      for (int j = i; j < s.length(); j++)
      {
        if (m[s[j]] == 0)
        {
          c++;
          m[s[j]]++;
        }
        if (c == 3)
        {
          if (m[s[j + 1]] == 0)
          {
            cpp++;
            c = 0;
            i = j;
            break;
          }
        }
        else
        {
          i = j;
        }
      }
    }
    if (c > 0)
      c = 1;
    cout << c + cpp << "\n";
  }
