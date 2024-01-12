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

