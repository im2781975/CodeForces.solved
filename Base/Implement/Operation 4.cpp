void div2_29_7_23B()
  {
    ll n, msize = 0, ans = 0, mTest = 10000;
    cin >> n;
    for (int i = 1; i <= mTest; i++)
    {
      if (n % i == 0)
        ans++;
      else
      {
        msize = max(msize, ans);
        ans = 0;
      }
    }
    cout << msize << "\n";
  }
ll maxe(ll num, ll num2)
  {
    if (num > num2)
      return num;
    else
      return num2;
  }
  bool isSorted(vector<ll> v)
  {
    for (int i = 1; i < v.size(); i++)
    {
      if (v[i - 1] > v[i])
        return false;
    }
    return true;
  }
  bool checking(string s)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] != '0')
        return true;
    }
    return false;
  }
  bool LocalMax(vector<ll> v)
  {
    for (int i = 1; i < v.size(); i++)
    {
      if (i != v.size() - 1)
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
          return false;
    }
    return true;
  }
// void solve13(){
    //   // https://codeforces.com/contest/1352/problem/C
    //   ll n, k;
    //   ll op = 0;
    //   cin >> n >> k;
    //   cout << k+(k-1)/(n-1)<< "\n";
    // }
--
unsigned long long z, x, y, c, m, s;
cin >> x;
while (x-- > 0)
{
    cin >> y;
    c = 0;
    m = 1;
    s = y;
    while (y-- > 0)
    {
        cin >> z;
        if (z % 2 == 0 && m % 2 == 0)
            c++;
        if (z % 2 != 0 && m % 2 != 0)
            c++;
        m++;
    }
    if (c == s)
        cout << "YES\n";
    else
        cout << "NO\n";
}
--
  int n, m, z, c, f, po;

while (cin >> n >> m && n > 0 && m > 0) {
    c = 0, f = 0;

    while (n-- > 0) {
        cin >> z;

        if (z == m) {
            if (c == 0)
                po = f;
            
            c++;
        }

        f++;
    }

    if (c == 0)
        cout << "-1" << endl;
    else
        cout << c << " " << po << endl;
}
--
  int x;
cin >> x;
int z = 0;
char *y = new char[x];
double *f = new double[x + 1];

while (z++ < x)
    cin >> y[z - 1];

z = 0;
while (z++ <= x)
    cin >> f[z - 1];

z = 0;
while (z++ < x) {
    switch (y[z - 1]) {
        case ('+'): f[z] = f[z - 1] + f[z]; break;
        case ('-'): f[z] = f[z - 1] - f[z]; break;
        case ('*'): f[z] = f[z - 1] * f[z]; break;
        case ('/'): f[z] = f[z - 1] / f[z]; break;
    }
}

printf("%0.2f\n", f[x]);
#include <iostream>

int main() {
    char x[10][10], y;
    int c = 0;

    // Input for the array
    for (int i = 0; i < 10; i++) {
        c = 0;
        for (int j = 0; j < 10; j++) {
            std::cin >> y;
            x[i][j] = y;
            if (y == '*') c++;
        }

        if (c == 10) {
            std::cout << "YES\n";
            return 0;
        }
    }

    // Check columns
    for (int i = 0; i < 10; i++) {
        c = 0;
        for (int j = 0; j < 10; j++)
            if (x[j][i] == '*') c++;

        if (c == 10) {
            std::cout << "YES\n";
            return 0;
        }
    }

    std::cout << "NO\n";

    return 0;
}
#include <iostream>

struct X {
    char y[100]; // Assuming the size, adjust as needed
    int z;
};

int main() {
    int m, s = 0, w = 0;
    char r;

    std::cin >> m;
    struct X f[1000]; // Assuming the size, adjust as needed

    // Input for struct array
    while (s++ < m) {
        std::cin >> f[s].y >> f[s].z;
    }

    std::cin >> r;
    s = 0;
    w = 0;

    // Sum values based on the condition
    while (s++ < m) {
        if (f[s].y[0] == r) {
            w += f[s].z;
        }
    }

    std::cout << w << std::endl;

    return 0;
}
#include <iostream>

int main() {
    int x, z, f, c = 0, h = 100001;
    std::cin >> x;
    int y[h];
    
    z = 0;
    while (z++ < h)
        y[z - 1] = -1;

    z = 0;
    while (z++ < x) {
        std::cin >> f;
        y[f] = f;
    }

    z = 0;
    while (z++ < h) {
        if (y[z - 1] == -1)
            continue;
        else {
            c++;
        }
    }

    z = 0;
    std::cout << c << std::endl;
    while (z++ < h) {
        if (y[z - 1] == -1)
            continue;
        else {
            std::cout << y[z - 1];
            f = z - 1;
            break;
        }
    }

    z = 0;
    while (z++ < h) {
        if (y[z - 1] == -1 || z - 1 == f)
            continue;
        else
            std::cout << " " << y[z - 1];
    }

    std::cout << std::endl;

    return 0;
}
