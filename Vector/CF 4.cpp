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
void greater() {
    //count greater values from specific idx
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());

    int val = vec[k - 1];
    int i = 0;
    int cnt = 0;

    if (val == 0) {
        int cap = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] > 0)
                cap++;
        }
        cout << cap << endl;
    } else {
        while (vec[i] >= val && i < n) {
            i++;
            cnt++;
        }
        cout << cnt << "\n";
    }
}
void AllEqual()
    bool flag = false;
    vector<int> vec{1, 1, 1, 1, 1};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < vec.size(); i++)
    {
        maxi = max(maxi, vec[i]);
        mini = min(mini, vec[i]);
        cout << maxi << " ";
        if (maxi == mini)
        {
            flag = true;
            cout << "Yes";
            break;
        }
    }
    if (!flag)
        cout << "No";
    return 0;
}
