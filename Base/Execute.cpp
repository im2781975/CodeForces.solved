#include <bits/stdc++.h>
using namespace std;
void BasedCondition() {
    int n, cnt = 0;
    cin >> n;
    while (n > 0) {
        if (n % 10 == 2)
            cnt++;
        n /= 10;
    }
    cout << cnt;
}
void BasedCondition()
{
    int a, b, ans;
    cin >>a >>b;
    if(a==0)
        ans=1;
    else
        ans = a + 2*b +1;
    cout <<ans;
}
void BasedCondition()
{
    int n;
    cin >> n;
    int ans = 0;
    int x = n % 10 - 1;
    ans += 10 * x;
    
    int k = n % 10;
    int cnt = 0;
    int ptr = 1;
    
    while (cnt <= n)
    {
        cnt = cnt % 10 + k;
        ans += ptr;
        ptr++;
    }
    cout << ans;
}
