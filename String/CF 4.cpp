#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans = 0;

int q(int x, int y) {
    int n = 0;
    memset(b, 0, sizeof b);

    for (int i = x; i <= y; i++) {
        b[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (b[i] == 1) n++;
    }
    return n;
}

int main() {
    scanf("%s", a);
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        ans += q(i, i);
        for (int j = i + 1; j < len; j++) {
            ans += q(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
void solve()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = 2021;

    int k;
    int ans = -1;

    for (int i = 1; i <= 100000; i++)
    {
        int x = i;
        while (x)
        {
            int k = x % 10;
            a[k]--;
            x /= 10;
            if (a[k] == -1)
            {
                ans = i;
                break;
            }
        }
        if (ans != -1)
            break;
    }
    cout << ans - 1 << endl;
}

