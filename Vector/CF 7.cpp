#include <bits/stdc++.h>
using namespace std;
void PrimeFactor() {
    int n, cnt = 0;
    cin >> n;
    vector<int> prime;
    while (n % 2 == 0) {
        if (cnt == 0)
            prime.push_back(2);
        n /= 2;
        cnt = 1;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        cnt = 0;
        while (n % i == 0) {
            if (cnt == 0)
                prime.push_back(i);
            cnt = 1;
            n = n / i;
        }
    }
    if (n > 2)
        prime.push_back(n);
    for (int i = 0; i < prime.size(); i++)
        cout << prime[i] << " ";
    return 0;
}
