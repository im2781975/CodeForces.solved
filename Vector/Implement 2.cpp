#include<bits/stdc++.h>
using namespace std;
void solvee() {
    int n;
    cin >> n;
    vector<char> v(n);
    string s;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        v[i] = s[i];
    }
    
    sort(v.begin(), v.end());
    cout << static_cast<int>(v[n - 1]) - 48 << "\n";
}
void solve_div()
{
  char arr[8][8];
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == '#')
      {
        cout << i + 1 << " " << j + 1 << "\n";
        break;
      }
    }
  }
}
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    int i = 1;
    int current = 0;
    
    while (i <= n) {
        if (s[current] == s[i]) {
            v.push_back(s[current]);
            current = i + 1;
            i++;
        }
        i++;
    }
    
    for (auto i : v)
        cout << i;

    cout << endl;

    return 0;
}
void solveee() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  if (v[n - 1] * v[n - 2] >= v[0] * v[1])
    cout << v[n - 1] * v[n - 2] << "\n";
  else
    cout << v[0] * v[1] << "\n";
}

