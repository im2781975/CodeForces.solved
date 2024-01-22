
#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> c(n, 0);
    vector<int> b(n + m + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        b[a[x]] += i - c[x];
        c[x] = i;
        a[x] = y;
    }
    m++;

    for (int i = 0; i < n; i++)
        b[a[i]] += m - c[i];

    int ans = 0;

    for (int i = 0; i < b.size(); i++) {
        ans += ((b[i] * (m - b[i])) + ((b[i] * (b[i] - 1)) / 2));
    }
    cout << ans << "\n"
}
