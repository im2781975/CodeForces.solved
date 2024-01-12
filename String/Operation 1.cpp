#include<bits/stdc++.h>
using namespace std;
void problem3() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp1 = 0, temp2 = 0, f = 0;
        int l;
        cin >> l;
        string x;
        cin >> x;
        for (int j = 0; j < x.length(); j++) {
            if (x[j] == 'U') temp1 += 1;
            else if (x[j] == 'D') temp1 -= 1;
            else if (x[j] == 'R') temp2 += 1;
            else if (x[j] == 'L') temp2 -= 1;
      
        if (temp1 == 1 && temp2 == 1) {
            cout << "YES\n";
            f = 1;
            break;
        }
    }
    if (f == 0) cout << "NO\n";
  }
}
void solveE()
{
  string s, s2;
  cin >> s >> s2;
  ll temp = 0;
  ll temp2 = 0;
  int len1 = s.length(), len2 = s2.length();
  if (s[len1 - 1] == 'M')
    temp = 1;
  else if (s[len1 - 1] == 'L')
    temp = (len1)*2;
  else if (s[len1 - 1] == 'S')
    temp = len1 * -1;

  if (s2[len2 - 1] == 'M')
    temp2 = 1;
  else if (s2[len2 - 1] == 'L')
    temp2 = len2 * 2;
  else if (s2[len2 - 1] == 'S')
    temp2 = len2 * -1;

  // sec string
  if (temp > temp2)
    cout << ">"
         << "\n";
  else if (temp < temp2)
    cout << "<"
         << "\n";
  else
    cout << "="
         << "\n";
  temp = 0;
  temp2 = 0;
}

