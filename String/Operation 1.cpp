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

